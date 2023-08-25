#include "mbed.h"

AnalogIn pb(p19);
DigitalOut myled(p5);

int main() {
  while(1) {
      int x=pb.read();
    if(x>=500){
        myled=1;
    }
    else{
        myled=0;
    }
  }
}
