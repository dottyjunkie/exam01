#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

    uLCD.printf("105022204\n"); //Default Green on black text
    uLCD.line(50, 50, 50 ,100,0xFFFFFF);
    uLCD.line(50, 50, 100 ,50,0xFFFFFF);
    uLCD.line(100, 100,100 ,50,0xFFFFFF);
    uLCD.line(100, 100, 50 ,100,0xFFFFFF);
    
    wait(30);

}