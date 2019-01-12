#include "Nextion.h"
#include "NexTouch.h"

SerialBuffer<4096> serBuf(Serial1);

void listenForTouchEvents(NexTouch *nex_listen_list[]) {
  static uint8_t __buffer[20];

  uint16_t i;
  uint8_t c;
  bool dataReady = false;

  c = serBuf.read();

  if (NEX_RET_EVENT_TOUCH_HEAD == c){
    while (!dataReady){
      if (serBuf.available() >= 6){
        dataReady=true;
      }
    }
    __buffer[0] = c;
    for (i = 1; i < 7; i++){
      __buffer[i] = serBuf.read();
    }
    __buffer[i] = 0x00;

    if (0xFF == __buffer[4] && 0xFF == __buffer[5] && 0xFF == __buffer[6]){
      NexTouch::iterate(nex_listen_list, __buffer[1], __buffer[2], (int32_t)__buffer[3], NULL);
    }
  }
}