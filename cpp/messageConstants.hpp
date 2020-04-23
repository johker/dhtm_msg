#pragma once

#define ID_OFFSET 0
#define CMD_OFFSET 4
#define KEY_OFFSET 6
#define SIZE_OFFSET 10
#define PAYLOAD_OFFSET 12

namespace dh {

enum MessageCommand : uint32_t  { 
    ACK= 0,
    READ= 1,
    WRITE= 2,
    PRINT= 3
};
enum MessageKey : uint32_t  { 
    P_ACTBTS= 1,
    P_SDRLEN= 2,
    S_INPUT= 1001,
    S_SPOOL= 1002
};
}
