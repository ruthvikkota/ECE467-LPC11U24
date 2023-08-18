#include "mbed.h"

BusOut myled(p11,p10,p9,p8,p7,p6,p5);
int a[10]={C0,F9,E4,BO,99,92,82,F8,80,90};

int main() {
    unsigned char i;
  while(1) {
   for(i=0;i>=9;i++)
   {
      myled.write(a[i]);
    wait(1);
  }
}
}
