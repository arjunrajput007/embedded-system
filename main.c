/*
 * three digit.c
 *
 * Created: 07-07-2022 00:33:25
 * Author : arjun
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
uint16_t segment[10];

int main(void)
{
    segment[0] = 0b00111111;
	segment[1] = 0b00000110;
	segment[2] = 0b01011011;
	segment[3] = 0b01001111;
	segment[4] = 0b01100110;
    segment[5] = 0b01101101;
	segment[6] = 0b01111101;
	segment[7] = 0b00000111;
	segment[8] = 0b01111111;
	segment[9] = 0b01101111;
	DDRC = 0b11111111;
	DDRD = 0b11111111;
	DDRB = 0b11111111;
    while (1) 
    {
		for (int i=0;i<=9;i++)
		{
			for(int j=0;j<=9;j++)
			
			{
				for (int k=0;k<=9;k++)	
		    	{
				PORTC = segment[i];
				PORTD = segment[j];
				PORTB = segment[k];_delay_ms(100);}
			}
		}
    }
}
