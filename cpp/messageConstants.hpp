#pragma once

#define ID_OFSSET 0
#define CMD_OFFSET 4
#define KEY_OFFSET 8
#define SIZE_OFFSET 14
#define PAYLOAD_OFFSET 16

namespace dh {

enum MessageCommand { 
    ACK: 0,
    READ: 1,
    WRITE: 2,
    PRINT: 3
};
enum MessageKey { 
    P_ACTBTS: 1,
    P_SDRLEN: 2,
    S_INPUT: 1001,
    S_SPOOL: 1002
};
}
