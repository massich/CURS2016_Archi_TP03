
#include "iq.h"
#include "iq_adc.h"
#define byte unsigned char

byte *trisb = (byte *)0xf93�;
byte *portb = (byte *)0xf81�;
byte *trisc = (byte *)0xf94�;
byte *portc = (byte *)0xf82�;

byte premier;
byte second;
int troisieme;
byte myValue;
byte myNumber;


void init_adc();
byte lecture_analogique();

void affiche_7seg(byte val, byte num_affich)
{
byte tab_7seg[]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
byte kk = 0;
*portb=tab_7seg[val];

while (kk<100)
	{kk = kk+1;}
*portc = num_affich;
while (kk<100)
	{kk = kk+1;
}
}


void displayHexa ( byte val){
	*portb = val;
}

byte val_passe, val_div10, val_div100;
byte unite, dizaine, centaine;

void displayDec ( byte val){
byte digitLUT[] = {0b11111111, 0b01111111, 0b10111111, 0b11011111, 0b11101111};
val_passe = val;
val_div10 = val/10;
val_div100 = val/100;

unite = val % 10;
dizaine = val_div10 % 10;
centaine = val_div100 % 10;

affiche_7seg(centaine, digitLUT[3]);
//*portc = 0xFF;
affiche_7seg(dizaine, digitLUT[2]);
//*portc = 0xFF;
affiche_7seg(unite, digitLUT[1]);
//*portc = 0xFF;

}


void main(void)
{

*trisb=0;
*trisc=0;
init_adc();

myValue = 200;

while(1)
	{
//	myValue = lecture_analogique();   // Read temperature
	displayDec(myValue);
	//displayHexa(myValue);

}
	
}