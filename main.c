/*
 * main.c
 *
 *  Created on: Sep 18, 2019
 *      Author: Vima
 */

//#include "OLED64x128.h"
#include "i2c.h"

 int main(){
	TWI_init(); //initiatei2c
	 OLED_init();
	 clear_screen();
	// DDRB = (1<< PB0);	//set PB0 direction as output
	// PORTB ^= (1<< PB0); //exclusive OR of pin with itself:Blink
	 unsigned char *txt_ptr = " OLED 64x128 Set up.";
	 write_text(2,txt_ptr);
	 txt_ptr = "    OLED is ready!";
	 write_text(5,txt_ptr);
	 update_screen();

	 return(0);
 }
