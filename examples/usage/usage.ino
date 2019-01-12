// Example usage for NextionBasic library.

#include "NextionBasic.h"
#include "Particle.h"

//declare stuff that we receive from display
NexTouch myButton = NexTouch(0,22,"m0");

NexTouch *nex_listen_list[] =
{
   &myButton,
   NULL
};

void setup() {
  Serial1.begin(9600);
  pinMode(D7, OUTPUT);
  myButton.attachPush(myButtonPushCallback);
  myButton.attachPop(myButtonPopCallback);
}

void loop() {
  listenForTouchEvents(nex_listen_list);
}

//Callback Functions
void myButtonPushCallback(void *ptr){
    digitalWrite(D7, HIGH);
}

void myButtonPopCallback(void *ptr){
    digitalWrite(D7, LOW);
}

//To send to screen just use the serial port directly, issuing the documented Nextion Commands, eg:
// Serial1.print("b2.txt=");
// Serial1.write(0xff);
// Serial1.write(0xff);
// Serial1.write(0xff);