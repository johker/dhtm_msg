#pragma once

#define ID_OFSSET 0
#define CMD_OFFSET 2
#define KEY_OFFSET 6
#define SIZE_OFFSET 12

namespace dh {

enum MessageCommand { 
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
