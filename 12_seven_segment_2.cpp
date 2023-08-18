#include "mbed.h"

BusOut myled(p5,p6,p7,p8,p9,p10,p11,p12);
int a[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

int main() {
    unsigned char i;
    while (1) {
        for (i = 0; i <= 9; i++) { 
            myled.write(a[i]);
            wait(1);
        }
    }
}
