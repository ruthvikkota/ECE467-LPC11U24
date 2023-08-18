#include "mbed.h"

BusOut myled(p5,p6,p7,p8,p9,p10,p11,p12);
int a[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
DigitalIn sw(p15);
int main() {
    unsigned char i;
    i=0;
    sw.mode(PullUp);
    while (1) {
        if(sw==0)
        {
            wait(0.2);
            if(sw==1){
                i++;
            }
        } 
        if(i==10)
        {
            i=0;
        }
       
            myled.write(a[i]);
            wait(1);
        
    }
}
