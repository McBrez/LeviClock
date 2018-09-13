/*
 * CPPFile1.cpp
 *
 * Created: 08.09.2018 19:12:14
 *  Author: David
 */ 

#include<USB_Comm.h>
#include<math.h>

void USB_Comm::USB_Comm( unsigned int baudRate )
{
	unsigned int ubrr;
			
	this->baudRate = baudRate;
	// calculate UBBR value
	UBRR0 = floor( F_CPU / ( 16 * baudRate ) - 1 );	
	/* Enable receiver and transmitter */
	UCSR0B = (1<<RXEN0)|(0<<TXEN0);
	/* Set frame format: 8data, 2stop bit */
	UCSR0C = (1<<USBS0)|(3<<UCSZ00);		 
}
		
void USB_Comm::writeChar( char c)
{
	UDR0 = c;
}
	
