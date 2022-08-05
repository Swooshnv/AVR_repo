/*
 * Asn_1.c
 * Soroush Naghavi
 * Created: 7/28/2022 9:32:50 PM
 * Author: asus
 */

#include <io.h>
#include <delay.h>
void main(void)
{
int i = 0;
DDRD = 0xFF;
while (1)
    {
        for (i = 1; i <= 64; i = i * 2){
            PORTD = i;
            delay_ms(25);
        }
        for (i = 128; i >= 1; i = i / 2){
            PORTD = i;
            delay_ms(25);
        }
        for (i = 1; i <= 128; i = i * 2){
            PORTD = i - 1;
            delay_ms(25);
        }
        for (i = 256; i >= 1; i = i / 2){
            PORTD = i - 1;
            delay_ms(25);
        }
    }
}
