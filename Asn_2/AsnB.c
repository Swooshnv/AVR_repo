#include <mega32.h>
#include <delay.h>
void main(void)
{int i, j, time = 62;
int binaryCodesZero[10] = {0b1000000,0b1111001,0b0100100,0b0110000,0b0011001,0b0010010,0b0000010,0b1111000,0b0000000,0b0010000};
int binaryCodesOne[10] = {0b0111111,0b0000110,0b1011011,0b1001111,0b1100110,0b1101101,0b1111101,0b0000111,0b1111111,0b1101111};
int hexCodesZero[16] = {0b1000000,0b1111001,0b0100100,0b0110000,0b0011001,0b0010010,0b0000010,0b1111000,0b0000000,0b0010000,0b0001000,0b0000011,0b0100111,0b0100001,0b0000110,0b0001110};
int a = time % 10;
DDRD = 0xFF;
DDRC = 0xFF;
PORTD = 0x00;
PORTC = 0xFF;
while (1)
    {for (i = (time - (time % 10)) / 10; i >= 0; i--){
        for (j = a; j >= 0; j--){
            delay_ms(100);
            PORTC = binaryCodesZero[i];
            PORTD = binaryCodesOne[j];}
    a = 9;}
    PORTD = 0x00;
    for (i = 0; i <= 15; i++){
    delay_ms(100);
    PORTC = hexCodesZero[i];}
    break;}     
while (1){}}
