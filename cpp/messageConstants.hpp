#pragma once

#define ID_OFFSET 0
#define TYPE_OFFSET 2
#define CMD_OFFSET 4
#define KEY_OFFSET 8
#define PAYLOAD_OFFSET 12
#define MSG_KEY_DIV 1000

namespace dh {

enum MessageType : uint16_t  { 
    UNDEFINED= 0,
    DATA= 1,
    CONFIGURATION= 2,
    NETWORK= 3
};
enum MessageCommand : uint16_t  { 
    RESERVED= 0,
    READ= 1,
    WRITE= 2,
    PRINT= 3,
    ACK= 4
};
enum MessageKey : uint16_t  { 
    P_ACTBTS= 1,
    P_SDRLEN= 2,
    S_INPUT= 1001,
    S_SPOOL= 1002
};
}
