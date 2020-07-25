#pragma once

#define ID_OFFSET 0
#define CAT_OFFSET 2
#define CMD_OFFSET 4
#define KEY_OFFSET 8
#define PAYLOAD_OFFSET 12

namespace dh {

enum MessageCategory : uint16_t  { 
    UNDEFINED= 0,
    REQUEST= 1,
    RESPONSE= 2,
    EVENT= 3
};
enum MessageCommand : uint16_t  { 
    RESERVED= 0,
    READ= 1,
    WRITE= 2,
    PRINT= 3
};
enum MessageKey : uint16_t  { 
    P_ACTBTS= 1,
    P_SDRLEN= 2,
    S_INPUT= 1001,
    S_SPOOL= 1002
};
}
