// Host side of the opt-in Online Mode hooks. See fvzdx_online.hpp.
//
// The game keeps one TCP stream at a time: the lobby, then the battle server
// address the lobby returns. The browser bridge (bridge.js) owns that stream
// as one WebSocket on the main thread; these handlers run on the emulation
// thread and reach it through synchronous main-thread calls. Guest code and
// guest RAM are only touched here, never from a JavaScript callback.

#include "fvzdx_online.hpp"

#include <cstdint>
#include <cstdio>
#include <cstring>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/threading.h>
#include <unistd.h>
#endif

namespace fvzdx_online {

using namespace ps2;

namespace {

constexpr std::uint32_t kSocket = 7;        // the reference patch's dummy socket id
constexpr std::uint32_t kLobbyAddress = 0x77; // dummy resolved address meaning "lobby"
constexpr std::uint32_t kFail = 0xFFFFFFFFu;
constexpr std::uint32_t kComRNo0 = 0x0057FEE8u; // COM_R_No_0
constexpr std::uint32_t kUserProf = 0x00A88370u; // user_prof
constexpr std::uint32_t kBuffer = 64u << 10;
constexpr double kConnectMs = 5000.0;

enum State { kNone = 0, kConnecting = 1, kOpen = 2, kClosed = 3 };

std::uint8_t g_buffer[kBuffer];

void finish(Cpu &c) { c.pc = c.r[31].w[0]; }
void finish(Cpu &c, std::uint32_t v0) { set32(c.r[2], v0); c.pc = c.r[31].w[0]; }

std::uint32_t arg(const Cpu &c, int n) { return c.r[4 + n].w[0]; }

void guest_write(std::uint32_t address, const std::uint8_t *data, std::uint32_t size) {
    for (std::uint32_t i = 0; i < size; ++i) st8(address + i, data[i]);
}

void guest_read(std::uint32_t address, std::uint8_t *data, std::uint32_t size) {
    for (std::uint32_t i = 0; i < size; ++i) data[i] = ld8(address + i);
}

#ifdef __EMSCRIPTEN__
int js_open(int battle, std::uint32_t ip, std::uint32_t port) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.open($0, $1 >>> 0, $2) : -1; }, battle, ip, port);
}
int js_state() { return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.state() : 0; }); }
int js_available() { return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.available() : 0; }); }
int js_read(std::uint8_t *out, std::uint32_t size) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.read($0, $1) : -1; }, out, size);
}
int js_write(const std::uint8_t *data, std::uint32_t size) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.write($0, $1) : -1; }, data, size);
}
void js_close(int reason) { MAIN_THREAD_EM_ASM_INT({ if (Module.fvzdxOnline) Module.fvzdxOnline.close($0); return 0; }, reason); }
int js_login_key(std::uint8_t *out, std::uint32_t size) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.fvzdxOnline ? Module.fvzdxOnline.loginKey($0, $1) : 0; }, out, size);
}
double now_ms() { return emscripten_get_now(); }
void pause_ms(int ms) { usleep(static_cast<useconds_t>(ms) * 1000u); }
#else
// Native builds have no browser transport: the original client sees no line.
int js_open(int, std::uint32_t, std::uint32_t) { return -1; }
int js_state() { return kNone; }
int js_available() { return 0; }
int js_read(std::uint8_t *, std::uint32_t) { return -1; }
int js_write(const std::uint8_t *, std::uint32_t) { return -1; }
void js_close(int) {}
int js_login_key(std::uint8_t *, std::uint32_t) { return 0; }
double now_ms() { return 0.0; }
void pause_ms(int) {}
#endif

// The reference client writes its login key into user_prof while that field
// is empty, so the original form has a value. Keep an existing value.
void write_login_key() {
    if (ld8(kUserProf) != 0) return;
    std::uint8_t key[32] = {};
    const int n = js_login_key(key, sizeof key);
    if (n > 0 && n < static_cast<int>(sizeof key)) guest_write(kUserProf, key, static_cast<std::uint32_t>(n));
}

std::uint32_t receive(std::uint32_t address, std::uint32_t size) {
    if (size == 0) return 0;
    const int ready = js_available();
    if (ready <= 0) return 0;
    std::uint32_t n = static_cast<std::uint32_t>(ready);
    if (n > size) n = size;
    if (n > kBuffer) n = kBuffer;
    const int got = js_read(g_buffer, n);
    if (got <= 0) return 0;
    guest_write(address, g_buffer, static_cast<std::uint32_t>(got));
    return static_cast<std::uint32_t>(got);
}

}  // namespace

void tcp_open(Cpu &c) {
    const std::uint32_t ip = arg(c, 0);
    std::uint32_t port = arg(c, 1) & 0xFFFFu;
    port = (port >> 8) | ((port & 0xFFu) << 8);
    const bool lobby = ip == kLobbyAddress;
    if (js_open(lobby ? 0 : 1, ip, port) < 0) { finish(c, kSocket); return; }
    // The reference connects synchronously with a 5 s limit before returning.
    const double until = now_ms() + kConnectMs;
    while (js_state() == kConnecting && now_ms() < until) pause_ms(5);
    std::fprintf(stderr, "[online] open %s port %u state %d\n", lobby ? "lobby" : "battle", port, js_state());
    finish(c, kSocket);
}

void tcp_close(Cpu &c) {
    js_close(0);
    finish(c, 0);
}

void tcp_send(Cpu &c) {
    const std::uint32_t address = arg(c, 1);
    std::uint32_t size = arg(c, 2);
    if (size == 0) { finish(c, 0); return; }
    if (size > kBuffer) size = kBuffer;
    guest_read(address, g_buffer, size);
    const int sent = js_write(g_buffer, size);
    finish(c, sent < 0 ? kFail : static_cast<std::uint32_t>(sent));
}

void tcp_recv(Cpu &c) { finish(c, receive(arg(c, 1), arg(c, 2))); }

void mcs_receive(Cpu &c) { finish(c, receive(arg(c, 0), arg(c, 1))); }

void tcp_get_status(Cpu &c) {
    const std::uint32_t out = arg(c, 1);
    const int ready = js_available();
    const std::uint32_t readable = ready > 0 ? (ready <= 0x7FFF ? static_cast<std::uint32_t>(ready) : 0x7FFFu) : 0u;
    st32(out, 0);
    st32(out + 4, readable);
    finish(c, readable ? 0u : kFail);
}

void resolve_begin(Cpu &c) { finish(c, kSocket); }

void resolve_result(Cpu &c) { finish(c, kLobbyAddress); }

void ppp_status(Cpu &c) { finish(c, 5); }

void connect_check(Cpu &c) { finish(c, js_state() == kOpen ? 1u : 0u); }

void return_zero(Cpu &c) { finish(c, 0); }

void skip_call(Cpu &c) { finish(c); }

void dial_start(Cpu &c) {
    st32(kComRNo0, 2);
    write_login_key();
    finish(c);
}

}  // namespace fvzdx_online
