//seven segment display with common cathode using busout with switch
#include "mbed.h"

BusOut seg(p5,p6,p7,p8,p9,p10,p11);
DigitalIn button(p12);

int main()
{
    unsigned char i = 0;
    unsigned char display[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

    while(1){
    if(button)
    {
        i=(i+1)%10;
        seg.write(display[i]);
        wait(1);
    }
    }
}
