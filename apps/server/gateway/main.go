// Command gateway is the private Online Mode byte gateway.
//
// Each WebSocket connection to /tcp/<endpoint> becomes one TCP connection to
// the configured loopback endpoint (the gdxsv lobby or battle server). Binary
// WebSocket messages carry raw TCP bytes in both directions; the gateway adds
// no framing and never parses, logs or synthesizes game bytes.
package main

import (
	"crypto/subtle"
	"encoding/json"
	"errors"
	"flag"
	"fmt"
	"io"
	"log"
	"net"
	"net/http"
	"os"
	"os/signal"
	"strings"
	"sync"
	"sync/atomic"
	"syscall"
	"time"

	"github.com/gorilla/websocket"
)

const (
	bufferSize   = 64 * 1024
	readLimit    = 1 << 20
	writeTimeout = 10 * time.Second
	dialTimeout  = 5 * time.Second
	closeGrace   = 2 * time.Second
	minTokenLen  = 32
)

type config struct {
	// Listen is the loopback listener, for example 127.0.0.1:19820.
	Listen string `json:"listen"`
	// Token is the shared capability; the client sends it as its only
	// WebSocket subprotocol.
	Token string `json:"token"`
	// Origins lists the exact page origins that may connect.
	Origins []string `json:"origins"`
	// Endpoints maps /tcp/<name> to a loopback TCP address.
	Endpoints map[string]string `json:"endpoints"`
	// TailnetListeners are optional listeners on this machine's tailnet
	// address. Only the listed tailnet peers may connect to each one.
	TailnetListeners map[string]tailnetListener `json:"tailnet_listeners"`
}

type tailnetListener struct {
	Listen string   `json:"listen"`
	Peers  []string `json:"peers"`
}

// Tailscale assigns addresses from the shared CGNAT range 100.64.0.0/10.
var tailnetRange = &net.IPNet{IP: net.IPv4(100, 64, 0, 0), Mask: net.CIDRMask(10, 32)}

func tailnetIP(text string) bool {
	ip := net.ParseIP(text)
	return ip != nil && ip.To4() != nil && tailnetRange.Contains(ip)
}

func loopbackAddress(addr string) bool {
	host, port, err := net.SplitHostPort(addr)
	if err != nil || port == "" || port == "0" {
		return false
	}
	ip := net.ParseIP(host)
	return ip != nil && ip.To4() != nil && ip.IsLoopback()
}

func validLabel(label string) bool {
	return label != "" && !strings.ContainsAny(label, " =/?#\t\n")
}

func (c *config) validate() error {
	if !loopbackAddress(c.Listen) {
		return errors.New("listen must be an IPv4 loopback ip:port")
	}
	if len(c.Token) < minTokenLen || strings.ContainsAny(c.Token, " ,\t\r\n") {
		return fmt.Errorf("token must be at least %d characters without separators", minTokenLen)
	}
	if len(c.Origins) == 0 {
		return errors.New("origins must not be empty")
	}
	for _, origin := range c.Origins {
		if !strings.HasPrefix(origin, "http://") && !strings.HasPrefix(origin, "https://") || strings.HasSuffix(origin, "/") {
			return fmt.Errorf("invalid origin %q", origin)
		}
	}
	if len(c.Endpoints) == 0 {
		return errors.New("endpoints must not be empty")
	}
	for name, addr := range c.Endpoints {
		if !validLabel(name) || !loopbackAddress(addr) {
			return fmt.Errorf("invalid endpoint %q", name)
		}
	}
	seen := map[string]bool{c.Listen: true}
	for label, t := range c.TailnetListeners {
		host, port, err := net.SplitHostPort(t.Listen)
		if !validLabel(label) || label == "default" || err != nil || port == "" || port == "0" || !tailnetIP(host) || len(t.Peers) == 0 {
			return fmt.Errorf("invalid tailnet listener %q", label)
		}
		if seen[t.Listen] {
			return fmt.Errorf("duplicate listener address %s", t.Listen)
		}
		seen[t.Listen] = true
		for _, peer := range t.Peers {
			if !tailnetIP(peer) {
				return fmt.Errorf("tailnet peer %q outside 100.64.0.0/10", peer)
			}
		}
	}
	return nil
}

// peerListener drops connections from any address other than the allowed peers.
type peerListener struct {
	net.Listener
	label string
	peers map[string]bool
}

func (l peerListener) Accept() (net.Conn, error) {
	for {
		conn, err := l.Listener.Accept()
		if err != nil {
			return nil, err
		}
		host, _, _ := net.SplitHostPort(conn.RemoteAddr().String())
		if l.peers[host] {
			return conn, nil
		}
		log.Printf("reject listener=%s peer=%s reason=peer-not-allowed", l.label, host)
		conn.Close()
	}
}

// counter counts one direction of a connection without looking at payload.
type counter struct{ bytes, frames atomic.Int64 }

func (c *counter) add(n int) {
	c.bytes.Add(int64(n))
	c.frames.Add(1)
}

func (c *counter) String() string {
	return fmt.Sprintf("bytes=%d frames=%d", c.bytes.Load(), c.frames.Load())
}

func errorCode(err error) string {
	switch {
	case errors.Is(err, syscall.ECONNREFUSED):
		return "ECONNREFUSED"
	case errors.Is(err, syscall.ECONNRESET):
		return "ECONNRESET"
	case errors.Is(err, syscall.EPIPE):
		return "EPIPE"
	}
	var ne net.Error
	if errors.As(err, &ne) && ne.Timeout() {
		return "ETIMEDOUT"
	}
	return "EIO"
}

type gateway struct {
	conf     config
	upgrader websocket.Upgrader
	serial   atomic.Uint64
	// active maps a connection id to its shutdown function.
	active sync.Map
	// live counts relays that have not returned yet.
	live atomic.Int64
}

func newGateway(conf config) *gateway {
	g := &gateway{conf: conf}
	g.upgrader = websocket.Upgrader{
		HandshakeTimeout: 5 * time.Second,
		ReadBufferSize:   bufferSize,
		WriteBufferSize:  bufferSize,
		// The handshake checks below already require an allowed Origin.
		CheckOrigin:  func(*http.Request) bool { return true },
		Subprotocols: []string{conf.Token},
	}
	return g
}

func localAddr(r *http.Request) string {
	if addr, ok := r.Context().Value(http.LocalAddrContextKey).(net.Addr); ok {
		return addr.String()
	}
	return ""
}

// listenerLabel names the listener that accepted r, or "" when the local
// address is not a configured listener.
func (g *gateway) listenerLabel(local string) string {
	if local == g.conf.Listen {
		return "default"
	}
	for label, t := range g.conf.TailnetListeners {
		if t.Listen == local {
			return label
		}
	}
	return ""
}

// check returns the endpoint address for an acceptable request, or the reason
// it is rejected. The token is compared in constant time and never logged.
func (g *gateway) check(r *http.Request) (string, string) {
	local := localAddr(r)
	if g.listenerLabel(local) == "" {
		return "", "listener"
	}
	// The Host header must name the listener address itself: a loopback
	// listener only 127.0.0.1:<port>, a tailnet listener only its own address.
	if r.Host != local {
		return "", "host"
	}
	if r.URL.RawQuery != "" || !strings.HasPrefix(r.URL.Path, "/tcp/") {
		return "", "path"
	}
	address, ok := g.conf.Endpoints[strings.TrimPrefix(r.URL.Path, "/tcp/")]
	if !ok {
		return "", "endpoint"
	}
	if !websocket.IsWebSocketUpgrade(r) {
		return "", "not-websocket"
	}
	origin, allowed := r.Header.Get("Origin"), false
	for _, candidate := range g.conf.Origins {
		if candidate == origin {
			allowed = true
		}
	}
	if !allowed {
		return "", "origin"
	}
	protocols := websocket.Subprotocols(r)
	if len(protocols) != 1 || subtle.ConstantTimeCompare([]byte(protocols[0]), []byte(g.conf.Token)) != 1 {
		return "", "token"
	}
	return address, ""
}

func (g *gateway) ServeHTTP(w http.ResponseWriter, r *http.Request) {
	address, reason := g.check(r)
	if reason != "" {
		host, _, _ := net.SplitHostPort(r.RemoteAddr)
		log.Printf("reject listener=%s peer=%s path=%q reason=%s", g.listenerLabel(localAddr(r)), host, r.URL.Path, reason)
		http.Error(w, http.StatusText(http.StatusForbidden), http.StatusForbidden)
		return
	}
	ws, err := g.upgrader.Upgrade(w, r, nil)
	if err != nil {
		log.Printf("reject path=%q reason=upgrade", r.URL.Path)
		return
	}
	g.live.Add(1)
	defer g.live.Add(-1)
	g.relay(ws, r, address)
}

// relay copies bytes between ws and a new TCP connection to address until
// either side closes. It returns only after both copy loops have stopped.
func (g *gateway) relay(ws *websocket.Conn, r *http.Request, address string) {
	id, opened := g.serial.Add(1), time.Now()
	label := g.listenerLabel(localAddr(r))
	peer, _, _ := net.SplitHostPort(r.RemoteAddr)
	var up, down counter
	var once sync.Once
	reason, service := "", "-"
	var writeMu sync.Mutex

	// finish records the first cause, sends one close frame and makes the
	// browser read loop return within closeGrace.
	finish := func(why string, code int) {
		once.Do(func() {
			reason = why
			writeMu.Lock()
			_ = ws.WriteControl(websocket.CloseMessage, websocket.FormatCloseMessage(code, ""), time.Now().Add(time.Second))
			writeMu.Unlock()
			_ = ws.SetReadDeadline(time.Now().Add(closeGrace))
		})
	}
	defer func() {
		ws.Close()
		// Waits for a concurrent finish, so reason is complete.
		once.Do(func() { reason = "gateway-control" })
		log.Printf("conn %d listener=%s peer=%s path=%s service=%s duration_ms=%d reason=%s up[%v] down[%v]",
			id, label, peer, r.URL.Path, service, time.Since(opened).Milliseconds(), reason, &up, &down)
	}()

	conn, err := net.DialTimeout("tcp4", address, dialTimeout)
	if err != nil {
		finish("dial-"+errorCode(err), websocket.CloseInternalServerErr)
		return
	}
	service = conn.LocalAddr().String()
	g.active.Store(id, func() { finish("gateway-stop", websocket.CloseGoingAway); conn.Close() })
	defer g.active.Delete(id)

	ws.SetReadLimit(readLimit)
	ws.SetPingHandler(func(data string) error {
		writeMu.Lock()
		defer writeMu.Unlock()
		return ws.WriteControl(websocket.PongMessage, []byte(data), time.Now().Add(time.Second))
	})

	// TCP -> WebSocket.
	downDone := make(chan struct{})
	go func() {
		defer close(downDone)
		buf := make([]byte, bufferSize)
		for {
			n, readErr := conn.Read(buf)
			if n > 0 {
				down.add(n)
				writeMu.Lock()
				_ = ws.SetWriteDeadline(time.Now().Add(writeTimeout))
				err := ws.WriteMessage(websocket.BinaryMessage, buf[:n])
				writeMu.Unlock()
				if err != nil {
					once.Do(func() { reason = "browser-send-failed" })
					ws.Close()
					return
				}
			}
			if readErr != nil {
				if readErr == io.EOF {
					finish("service-eof", websocket.CloseNormalClosure)
				} else {
					finish("service-"+errorCode(readErr), websocket.CloseInternalServerErr)
				}
				return
			}
		}
	}()

	// WebSocket -> TCP, in this goroutine.
	for {
		kind, data, err := ws.ReadMessage()
		if err != nil {
			var ce *websocket.CloseError
			if errors.As(err, &ce) {
				once.Do(func() { reason = fmt.Sprintf("browser-close-%d", ce.Code) })
			} else {
				once.Do(func() { reason = "browser-error" })
			}
			break
		}
		if kind != websocket.BinaryMessage {
			finish("browser-text-frame", websocket.CloseUnsupportedData)
			continue
		}
		if len(data) == 0 {
			continue
		}
		_ = conn.SetWriteDeadline(time.Now().Add(writeTimeout))
		n, err := conn.Write(data)
		up.add(n)
		if err != nil {
			finish("service-write-"+errorCode(err), websocket.CloseInternalServerErr)
			break
		}
	}
	// Closing TCP stops the reader goroutine; closing ws unblocks its write.
	conn.Close()
	ws.Close()
	<-downDone
}

// shutdown closes every open connection with 1001 and waits briefly for
// their log lines.
func (g *gateway) shutdown() int {
	open := 0
	g.active.Range(func(_, closer any) bool {
		closer.(func())()
		open++
		return true
	})
	g.drain(2 * closeGrace)
	return open
}

// drain waits until no relay is running or the timeout passes, and reports
// whether every relay returned.
func (g *gateway) drain(timeout time.Duration) bool {
	deadline := time.Now().Add(timeout)
	for g.live.Load() > 0 {
		if time.Now().After(deadline) {
			return false
		}
		time.Sleep(10 * time.Millisecond)
	}
	return true
}

func (g *gateway) handler() http.Handler {
	mux := http.NewServeMux()
	mux.Handle("/tcp/", g)
	return mux
}

func loadConfig(path string) (config, error) {
	var conf config
	raw, err := os.ReadFile(path)
	if err != nil {
		return conf, err
	}
	decoder := json.NewDecoder(strings.NewReader(string(raw)))
	decoder.DisallowUnknownFields()
	if err := decoder.Decode(&conf); err != nil {
		return conf, err
	}
	return conf, conf.validate()
}

func main() {
	file := flag.String("config", "", "private gateway JSON config")
	flag.Parse()
	log.SetFlags(log.LstdFlags | log.Lmicroseconds | log.LUTC)
	conf, err := loadConfig(*file)
	if err != nil {
		log.Fatal("config: ", err)
	}
	g := newGateway(conf)
	handler := g.handler()

	listeners := map[string]net.Listener{}
	l, err := net.Listen("tcp4", conf.Listen)
	if err != nil {
		log.Fatal(err)
	}
	listeners["default"] = l
	for label, t := range conf.TailnetListeners {
		l, err := net.Listen("tcp4", t.Listen)
		if err != nil {
			log.Fatal(err)
		}
		peers := map[string]bool{}
		for _, p := range t.Peers {
			peers[p] = true
		}
		listeners[label] = peerListener{l, label, peers}
	}

	stop := make(chan os.Signal, 1)
	signal.Notify(stop, syscall.SIGTERM, os.Interrupt)
	go func() {
		s := <-stop
		open := g.shutdown()
		log.Printf("gateway stopped by %v with %d open connections", s, open)
		os.Exit(0)
	}()

	failed := make(chan error, len(listeners))
	for label, l := range listeners {
		server := &http.Server{Handler: handler, ReadHeaderTimeout: 5 * time.Second}
		log.Printf("gateway listener %s on %s", label, l.Addr())
		go func() { failed <- server.Serve(l) }()
	}
	for label, t := range conf.TailnetListeners {
		log.Printf("gateway listener %s peers %v", label, t.Peers)
	}
	log.Fatal(<-failed)
}
