/*
 * LeviClock.cpp
 *
 * Created: 04.09.2018 07:30:11
 * Author : davfr
 */ 

#include <avr/io.h>


int main(void)
{
	bool i = false;
    /* Replace with your application code */
	PORTB = 0b1111111;
	DDRB  = 0b1111111;
    while (1) 
    {
		if(i)
		{
			PORTB = 0b1111111;
			i = false;
		}
		else
		{
			PORTB = 0b1111111;
			i = true;	
		}
    }
}

