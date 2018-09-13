/*
 * USB_Comm.h
 *
 * Created: 08.09.2018 19:14:36
 *  Author: David
 */ 

#ifndef USB_COMM_H_
#define USB_COMM_H_
#endif /* USB_COMM_H_ */

class USB_Comm
{
	public:
		USB_Comm(const int baudRate);
		
		void writeChar( char c );
	private:
		unsigned int baudRate;
};
