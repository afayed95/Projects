/*
 * File:   main.c
 * Author: Toshiba
 *
 * Created on 18 ?????, 2020, 04:50 ?
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    DDRA =0X00;
    DDRB =0X00;
    DDRC =0XFF;
    PORTC =0XFF;
    PORTA= PORTB =0X00;
    
    /* Replace with your application code */
    while (1) 
    {
        PORTC=PINA+PINB;
        _delay_ms(500);
        
    }
}
