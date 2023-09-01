#include "mbed.h"

DigitalOut rs(p8);
DigitalOut en(p9);


BusOut datapin(p21,p22,p23,p24,p25,p26,p27,p28);
void lcdcmd(unsigned char value);
void lcddata(unsigned char value);

int main()
{
    unsigned char x[]="tejo@$%#&^";
    unsigned char cmd[]={0x38,0x0e,0x01,0x06,0x80};
    int z;
    for(z=0;z<=4;z++)
    {
        lcdcmd(cmd[z]);
        wait(0.1);
    }
    for(z=0;z<=15;z++)
    {
        if(x[z]==0)
        break;
        lcddata(x[z]);
    }
}

void lcdcmd(unsigned char value)
{
    datapin=value;
    rs=0;
    en=1;
    wait_ms(5);
    en=0;
}

void lcddata(unsigned char value)
{
    datapin=value;
    rs=1;
    en=1;
    wait_ms(5);
    en=0;
}
