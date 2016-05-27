
#include "iq.h"
#include "iq_adc.h"
#define byte unsigned char

byte *trisb = (byte *)0xf93 ;
byte *portb = (byte *)0xf81 ;
byte *trisc = (byte *)0xf94 ;
byte *portc = (byte *)0xf82 ;


void init_adc();
byte lecture_analogique();


void main(void)
{

*trisb=0;
*trisc=0;
init_adc();

while(1)
	{

  	*portb = lecture_analogique();   // Read result
	}

	
}