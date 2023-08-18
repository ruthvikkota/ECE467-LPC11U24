#include "mbed.h"

DigitalOut a(p5);
DigitalOut b(p6);
DigitalOut c(p7);
DigitalOut d(p8);
DigitalOut e(p9);
DigitalOut f(p10);
DigitalOut segg(p11);

int main() {
  while(1) {
      //For zero
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=1;

    wait(0.6);

      //For one
    a=1;
    b=0;
    c=0;
    d=1;
    e=1;
    f=1;
    g=1;

    wait(0.6);
  }
}
