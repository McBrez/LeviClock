/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>

int main (void)
{
	// Clock and board init
	sysclk_init();
	board_init();

	// VL6280 ranging sensor init
	
	
	
	bool i = false;
	/* Replace with your application code */
	PORTB = 0b00000000;
	DDRB  = 0b11111111;
	while (1)
	{
		delay_s(1);
		if(i)
		{
			PORTB = 0b00000000;
			i = false;
		}
		else
		{
			PORTB = 0b11111111;
			i = true;
		}
	}
}
