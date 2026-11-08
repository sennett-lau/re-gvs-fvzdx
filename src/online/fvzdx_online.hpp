#pragma once

// Opt-in Online Mode hooks for SLPM-65076 v2.00. scripts/game/online.py
// replaces verified original call statements with these functions in a copy
// of the generated C++. Each handler reads the original MIPS arguments,
// sets v0 and returns to the original return address.

#include "ps2/generated.hpp"

namespace fvzdx_online {

void tcp_open(ps2::Cpu &c);        // Ave_TcpOpen(ip, port) from TcpOpen
void tcp_close(ps2::Cpu &c);       // Ave_TcpClose(sock) from TcpClose
void tcp_send(ps2::Cpu &c);        // Ave_TcpSend(sock, ptr, len) from TcpWrite
void tcp_recv(ps2::Cpu &c);        // Ave_TcpRecv(sock, ptr, len) from TcpRead
void mcs_receive(ps2::Cpu &c);     // McsReceive(ptr, len) from GetMsgMCS
void tcp_get_status(ps2::Cpu &c);  // TcpGetStatus(sock, out) from select_ps2
void resolve_begin(ps2::Cpu &c);   // gethostbyname_ps2_0(name) from tcp_init
void resolve_result(ps2::Cpu &c);  // gethostbyname_ps2_1(ticket) from tcp_init
void ppp_status(ps2::Cpu &c);      // AvepppGetStatus() while dialing / in lobby
void connect_check(ps2::Cpu &c);   // connect_ps2_check() from tcp_init
void return_zero(ps2::Cpu &c);     // calls whose original effect is not wanted
void skip_call(ps2::Cpu &c);       // a call removed by the reference patch
void dial_start(ps2::Cpu &c);      // dummy_00, the first matching_connect_jmp step

}
