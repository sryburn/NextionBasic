#ifndef Nextion_h
#define Nextion_h

#include "SerialBufferRK.h"
#include "NexTouch.h"

#define NEX_RET_EVENT_TOUCH_HEAD (0x65)

void listenForTouchEvents(NexTouch *nex_listen_list[]);

#endif