/*
 * lab2_2.1.c
 *
 * Created: 2018/9/13 15:32:25
 * Author : Lenovo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
      DDRD |= (1 << PORTD6);
      TCCR0A |= (1 << WGM01) | (1 << COM0A0);
      OCR0A = 70;
      TCCR0B |= (1 << CS02) ;
	  
    while (1) 
    {
    }
}

