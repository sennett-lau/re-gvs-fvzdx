package main

import (
	"bytes"
	"context"
	"errors"
	"io"
	"net"
	"net/http"
	"net/http/httptest"
	"os"
	"runtime"
	"strings"
	"testing"
	"time"

	"github.com/gorilla/websocket"
)

const testToken = "test-token-0123456789abcdef0123456789abcdef"
const testOrigin = "http://127.0.0.1:8642"

// tcpServer runs handle for every accepted connection on a loopback port.
func tcpServer(t *testing.T, handle func(net.Conn)) string {
	t.Helper()
	l, err := net.Listen("tcp4", "127.0.0.1:0")
	if err != nil {
		t.Fatal(err)
	}
	t.Cleanup(func() { l.Close() })
	go func() {
		for {
			c, err := l.Accept()
			if err != nil {
				return
			}
			go handle(c)
		}
	}()
	return l.Addr().String()
}

func echo(c net.Conn) {
	defer c.Close()
	_, _ = io.Copy(c, c)
}

// closedPort returns a loopback address with no listener.
func closedPort(t *testing.T) string {
	t.Helper()
	l, err := net.Listen("tcp4", "127.0.0.1:0")
	if err != nil {
		t.Fatal(err)
	}
	addr := l.Addr().String()
	l.Close()
	return addr
}

// startGateway serves a gateway on a loopback listener and returns its address.
func startGateway(t *testing.T, endpoints map[string]string) (string, *gateway) {
	t.Helper()
	l, err := net.Listen("tcp4", "127.0.0.1:0")
	if err != nil {
		t.Fatal(err)
	}
	conf := config{Listen: l.Addr().String(), Token: testToken, Origins: []string{testOrigin}, Endpoints: endpoints}
	if err := conf.validate(); err != nil {
		t.Fatal(err)
	}
	g := newGateway(conf)
	server := &http.Server{Handler: g.handler()}
	go server.Serve(l)
	t.Cleanup(func() { server.Close() })
	return conf.Listen, g
}

func dial(t *testing.T, addr, path string, header http.Header, protocols []string) (*websocket.Conn, *http.Response, error) {
	t.Helper()
	if header == nil {
		header = http.Header{"Origin": {testOrigin}}
	}
	d := websocket.Dialer{HandshakeTimeout: 3 * time.Second, Subprotocols: protocols}
	return d.Dial("ws://"+addr+path, header)
}

func mustDial(t *testing.T, addr, path string) *websocket.Conn {
	t.Helper()
	ws, _, err := dial(t, addr, path, nil, []string{testToken})
	if err != nil {
		t.Fatal(err)
	}
	t.Cleanup(func() { ws.Close() })
	return ws
}

// readClose reads until the gateway closes the WebSocket and returns the
// concatenated binary payload and the close code.
func readClose(t *testing.T, ws *websocket.Conn) ([]byte, int) {
	t.Helper()
	var got []byte
	ws.SetReadDeadline(time.Now().Add(5 * time.Second))
	for {
		_, data, err := ws.ReadMessage()
		if err != nil {
			var ce *websocket.CloseError
			if errors.As(err, &ce) {
				return got, ce.Code
			}
			t.Fatalf("expected a close frame, got %v", err)
		}
		got = append(got, data...)
	}
}

func TestConfigValidation(t *testing.T) {
	good := func() config {
		return config{Listen: "127.0.0.1:19820", Token: testToken, Origins: []string{testOrigin},
			Endpoints: map[string]string{"lobby": "127.0.0.1:19800", "battle": "127.0.0.1:19801"}}
	}
	if c := good(); c.validate() != nil {
		t.Fatal("good config rejected")
	}
	bad := map[string]func(*config){
		"wildcard listen":     func(c *config) { c.Listen = "0.0.0.0:19820" },
		"lan listen":          func(c *config) { c.Listen = "192.168.1.2:19820" },
		"empty host listen":   func(c *config) { c.Listen = ":19820" },
		"ipv6 listen":         func(c *config) { c.Listen = "[::1]:19820" },
		"hostname listen":     func(c *config) { c.Listen = "localhost:19820" },
		"short token":         func(c *config) { c.Token = "short" },
		"token with comma":    func(c *config) { c.Token = testToken + ",x" },
		"no origins":          func(c *config) { c.Origins = nil },
		"origin with path":    func(c *config) { c.Origins = []string{"http://127.0.0.1:8642/"} },
		"remote endpoint":     func(c *config) { c.Endpoints["lobby"] = "10.0.0.1:19800" },
		"endpoint with slash": func(c *config) { c.Endpoints["a/b"] = "127.0.0.1:1" },
		"tailnet not tailnet": func(c *config) {
			c.TailnetListeners = map[string]tailnetListener{"pc": {Listen: "192.168.1.2:19830", Peers: []string{"100.90.208.26"}}}
		},
		"tailnet no peers": func(c *config) {
			c.TailnetListeners = map[string]tailnetListener{"pc": {Listen: "100.89.188.30:19830"}}
		},
		"tailnet public peer": func(c *config) {
			c.TailnetListeners = map[string]tailnetListener{"pc": {Listen: "100.89.188.30:19830", Peers: []string{"8.8.8.8"}}}
		},
		"tailnet default label": func(c *config) {
			c.TailnetListeners = map[string]tailnetListener{"default": {Listen: "100.89.188.30:19830", Peers: []string{"100.90.208.26"}}}
		},
	}
	for name, mutate := range bad {
		c := good()
		mutate(&c)
		if c.validate() == nil {
			t.Errorf("%s: accepted", name)
		}
	}
	c := good()
	c.TailnetListeners = map[string]tailnetListener{"pc": {Listen: "100.89.188.30:19830", Peers: []string{"100.90.208.26"}}}
	if err := c.validate(); err != nil {
		t.Errorf("valid tailnet listener rejected: %v", err)
	}
}

func TestRejections(t *testing.T) {
	addr, _ := startGateway(t, map[string]string{"lobby": tcpServer(t, echo)})
	_, port, _ := net.SplitHostPort(addr)
	cases := []struct {
		name      string
		path      string
		header    http.Header
		protocols []string
	}{
		{"wrong token", "/tcp/lobby", nil, []string{"wrong-" + testToken}},
		{"missing token", "/tcp/lobby", nil, nil},
		{"two protocols", "/tcp/lobby", nil, []string{testToken, "other"}},
		{"wrong origin", "/tcp/lobby", http.Header{"Origin": {"http://evil.example"}}, []string{testToken}},
		{"missing origin", "/tcp/lobby", http.Header{}, []string{testToken}},
		{"localhost host", "/tcp/lobby", http.Header{"Origin": {testOrigin}, "Host": {"localhost:" + port}}, []string{testToken}},
		{"rebinding host", "/tcp/lobby", http.Header{"Origin": {testOrigin}, "Host": {"evil.example:" + port}}, []string{testToken}},
		{"unknown endpoint", "/tcp/other", nil, []string{testToken}},
		{"query", "/tcp/lobby?x=1", nil, []string{testToken}},
	}
	for _, c := range cases {
		ws, resp, err := dial(t, addr, c.path, c.header, c.protocols)
		if err == nil {
			ws.Close()
			t.Errorf("%s: accepted", c.name)
			continue
		}
		if resp == nil || resp.StatusCode != http.StatusForbidden {
			t.Errorf("%s: want 403, got %v %v", c.name, resp, err)
		}
	}
	// The accepted connection echoes the token as its subprotocol.
	ws, resp, err := dial(t, addr, "/tcp/lobby", nil, []string{testToken})
	if err != nil {
		t.Fatal(err)
	}
	defer ws.Close()
	if resp.Header.Get("Sec-WebSocket-Protocol") != testToken || ws.Subprotocol() != testToken {
		t.Errorf("subprotocol not echoed: %q", resp.Header.Get("Sec-WebSocket-Protocol"))
	}
}

// TestLoopbackOnly checks that a request that arrived on an address other than
// a configured listener is refused even with valid credentials.
func TestLoopbackOnly(t *testing.T) {
	conf := config{Listen: "127.0.0.1:19820", Token: testToken, Origins: []string{testOrigin},
		Endpoints: map[string]string{"lobby": "127.0.0.1:19800"}}
	g := newGateway(conf)
	for _, local := range []string{"192.168.1.2:19820", "0.0.0.0:19820", "127.0.0.1:19821", "100.89.188.30:19830"} {
		r := httptest.NewRequest("GET", "http://"+local+"/tcp/lobby", nil)
		r.Host = local
		r.Header.Set("Connection", "Upgrade")
		r.Header.Set("Upgrade", "websocket")
		r.Header.Set("Sec-WebSocket-Version", "13")
		r.Header.Set("Sec-WebSocket-Key", "dGhlIHNhbXBsZSBub25jZQ==")
		r.Header.Set("Sec-WebSocket-Protocol", testToken)
		r.Header.Set("Origin", testOrigin)
		laddr, _ := net.ResolveTCPAddr("tcp4", local)
		r = r.WithContext(context.WithValue(r.Context(), http.LocalAddrContextKey, laddr))
		if _, reason := g.check(r); reason != "listener" {
			t.Errorf("local %s: reason %q, want listener", local, reason)
		}
	}
}

func TestPeerListener(t *testing.T) {
	l, err := net.Listen("tcp4", "127.0.0.1:0")
	if err != nil {
		t.Fatal(err)
	}
	defer l.Close()
	pl := peerListener{l, "test", map[string]bool{"100.90.208.26": true}}
	accepted := make(chan net.Conn, 1)
	go func() {
		c, err := pl.Accept()
		if err == nil {
			accepted <- c
		}
	}()
	c, err := net.Dial("tcp4", l.Addr().String())
	if err != nil {
		t.Fatal(err)
	}
	defer c.Close()
	c.SetReadDeadline(time.Now().Add(2 * time.Second))
	if _, err := c.Read(make([]byte, 1)); err != io.EOF {
		t.Fatalf("disallowed peer: want EOF, got %v", err)
	}
	select {
	case <-accepted:
		t.Fatal("disallowed peer was accepted")
	default:
	}
}

func TestRoundTrip(t *testing.T) {
	addr, _ := startGateway(t, map[string]string{"lobby": tcpServer(t, echo)})
	ws := mustDial(t, addr, "/tcp/lobby")
	var sent []byte
	for i, size := range []int{1, 12, 4096, 70000} {
		chunk := bytes.Repeat([]byte{byte(i + 1)}, size)
		chunk[0] = 0x18
		sent = append(sent, chunk...)
		if err := ws.WriteMessage(websocket.BinaryMessage, chunk); err != nil {
			t.Fatal(err)
		}
	}
	var got []byte
	ws.SetReadDeadline(time.Now().Add(5 * time.Second))
	for len(got) < len(sent) {
		kind, data, err := ws.ReadMessage()
		if err != nil {
			t.Fatal(err)
		}
		if kind != websocket.BinaryMessage {
			t.Fatalf("message kind %d", kind)
		}
		got = append(got, data...)
	}
	if !bytes.Equal(got, sent) {
		t.Fatalf("round trip mismatch: %d bytes sent, %d received", len(sent), len(got))
	}
}

func TestServiceEOFClosesNormal(t *testing.T) {
	service := tcpServer(t, func(c net.Conn) {
		c.Write([]byte("bye"))
		c.Close()
	})
	addr, _ := startGateway(t, map[string]string{"lobby": service})
	got, code := readClose(t, mustDial(t, addr, "/tcp/lobby"))
	if string(got) != "bye" || code != websocket.CloseNormalClosure {
		t.Fatalf("got %q code %d, want \"bye\" 1000", got, code)
	}
}

func TestServiceResetCloses1011(t *testing.T) {
	service := tcpServer(t, func(c net.Conn) {
		// Wait for one byte so the gateway is reading, then reset.
		c.Read(make([]byte, 1))
		c.(*net.TCPConn).SetLinger(0)
		c.Close()
	})
	addr, _ := startGateway(t, map[string]string{"lobby": service})
	ws := mustDial(t, addr, "/tcp/lobby")
	ws.WriteMessage(websocket.BinaryMessage, []byte{1})
	if _, code := readClose(t, ws); code != websocket.CloseInternalServerErr {
		t.Fatalf("code %d, want 1011", code)
	}
}

func TestDialFailureCloses1011(t *testing.T) {
	addr, _ := startGateway(t, map[string]string{"battle": closedPort(t)})
	if _, code := readClose(t, mustDial(t, addr, "/tcp/battle")); code != websocket.CloseInternalServerErr {
		t.Fatalf("code %d, want 1011", code)
	}
}

func TestTextFrameRejected(t *testing.T) {
	addr, _ := startGateway(t, map[string]string{"lobby": tcpServer(t, echo)})
	ws := mustDial(t, addr, "/tcp/lobby")
	ws.WriteMessage(websocket.TextMessage, []byte("hello"))
	if _, code := readClose(t, ws); code != websocket.CloseUnsupportedData {
		t.Fatalf("code %d, want 1003", code)
	}
}

func TestBrowserCloseClosesTCP(t *testing.T) {
	closed := make(chan error, 1)
	service := tcpServer(t, func(c net.Conn) {
		defer c.Close()
		c.SetReadDeadline(time.Now().Add(5 * time.Second))
		_, err := io.Copy(io.Discard, c)
		closed <- err
	})
	addr, _ := startGateway(t, map[string]string{"lobby": service})
	ws := mustDial(t, addr, "/tcp/lobby")
	ws.WriteMessage(websocket.BinaryMessage, []byte("x"))
	ws.WriteControl(websocket.CloseMessage, websocket.FormatCloseMessage(websocket.CloseNormalClosure, ""), time.Now().Add(time.Second))
	select {
	case err := <-closed:
		if err != nil {
			t.Fatalf("service saw %v, want EOF", err)
		}
	case <-time.After(5 * time.Second):
		t.Fatal("TCP connection not closed after WebSocket close")
	}
}

func TestShutdownCloses1001(t *testing.T) {
	addr, g := startGateway(t, map[string]string{"lobby": tcpServer(t, echo)})
	ws := mustDial(t, addr, "/tcp/lobby")
	ws.WriteMessage(websocket.BinaryMessage, []byte("x"))
	ws.SetReadDeadline(time.Now().Add(5 * time.Second))
	if _, _, err := ws.ReadMessage(); err != nil {
		t.Fatal(err)
	}
	if open := g.shutdown(); open != 1 {
		t.Fatalf("shutdown closed %d connections, want 1", open)
	}
	if _, code := readClose(t, ws); code != websocket.CloseGoingAway {
		t.Fatalf("code %d, want 1001", code)
	}
}

// TestNoGoroutineLeak opens and ends many connections in each closing mode and
// requires the goroutine count to return to its starting level.
func TestNoGoroutineLeak(t *testing.T) {
	stall := tcpServer(t, func(c net.Conn) {
		// Never reads: the gateway's writes back up once the browser is gone.
		defer c.Close()
		buf := make([]byte, 1<<20)
		for {
			if _, err := c.Write(buf); err != nil {
				return
			}
		}
	})
	eof := tcpServer(t, func(c net.Conn) { c.Close() })
	addr, g := startGateway(t, map[string]string{"echo": tcpServer(t, echo), "stall": stall, "eof": eof, "dead": closedPort(t)})
	base := runtime.NumGoroutine()
	for i := 0; i < 20; i++ {
		ws, _, err := dial(t, addr, "/tcp/echo", nil, []string{testToken})
		if err != nil {
			t.Fatal(err)
		}
		ws.WriteMessage(websocket.BinaryMessage, []byte("ping"))
		ws.Close() // abrupt: no close frame
		for _, path := range []string{"/tcp/eof", "/tcp/dead"} {
			ws, _, err = dial(t, addr, path, nil, []string{testToken})
			if err != nil {
				t.Fatal(err)
			}
			readClose(t, ws)
			ws.Close()
		}
	}
	// A browser that stops reading while the service floods it.
	ws, _, err := dial(t, addr, "/tcp/stall", nil, []string{testToken})
	if err != nil {
		t.Fatal(err)
	}
	time.Sleep(200 * time.Millisecond)
	ws.Close()
	deadline := time.Now().Add(15 * time.Second)
	if !g.drain(15 * time.Second) {
		t.Fatalf("%d relays still running", g.live.Load())
	}
	for {
		n := runtime.NumGoroutine()
		if n <= base+2 {
			return
		}
		if time.Now().After(deadline) {
			buf := make([]byte, 1<<16)
			t.Fatalf("goroutines %d, base %d\n%s", n, base, buf[:runtime.Stack(buf, true)])
		}
		time.Sleep(100 * time.Millisecond)
	}
}

func TestLoadConfigRejectsUnknownField(t *testing.T) {
	path := t.TempDir() + "/gateway.json"
	raw := `{"listen":"127.0.0.1:19820","token":"` + testToken + `","origins":["` + testOrigin + `"],"endpoints":{"lobby":"127.0.0.1:19800"},"udp":{}}`
	if err := os.WriteFile(path, []byte(raw), 0o600); err != nil {
		t.Fatal(err)
	}
	if _, err := loadConfig(path); err == nil || !strings.Contains(err.Error(), "unknown field") {
		t.Fatalf("want unknown field error, got %v", err)
	}
}
