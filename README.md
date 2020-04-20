## DHTM Message format specification

Each message is encoded in binary format. Its components are:

* *ID*: uint16 - message ID 
* *Command*: uint16 - enum that describes the general purpose of the message.
* *Key*: uint32 - Specifies the payload - either the type of the SDR (e.g. level, encoding)  
* *Size*: uint16 - log2 of the payload size 
* *Payload*: Depends on the message type: Can be a parameter value (float) or a SDR (bit array)

Command and Key are sent two times as a simple error correction measure.

```
-------------------------------------------------------------------------------------------------------------------
||                            Header                              ||                      Body                   ||
-------------------------------------------------------------------------------------------------------------------
||      ID      |     Command   |       Key      |       Size     ||                     Payload                 ||
-------------------------------------------------------------------------------------------------------------------
||     0-3      |       4-7     |       8-13     |      14-15     ||                      16-n                   ||
-------------------------------------------------------------------------------------------------------------------
