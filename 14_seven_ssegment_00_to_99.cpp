#include "mbed.h"

BusOut myled(p5,p6,p7,p8,p9,p10,p11,p12);
int a[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
DigitalOut s1(p13);
DigitalOut s2(p14);
int main() {
    unsigned char i,j,k;
    i=0;
    j=0;
    k=0;
    while (1) {

        
       for(i=0;i<10;i++)
       {
           
            
            
           for(int j=0;j<10;j++)
           {
               
               s1=0;
               for(int k=0;k<10;k++)
            {
                 myled.write(a[i]);
                    
            }
         wait(0.01);
            s1=1;
             s2=0;
            for(int k=0;k<10;k++)
            {
                   s1=0;
                   s2=1;
                 myled.write(a[i]);
                    
            
         wait(0.01);
            s1=1;
            s2=0;
                 myled.write(a[j]);
                     wait(0.02);
            }
              
              
        
            s2=1;
           }
       }
        
       
           
        
    }
}
