/* Includes ---------------------------------------------*/
#include "main.h"

/* Defines ----------------------------------------------*/
#define BLINK_DELAY_ITERATIONS	 	4000000

/* Function prototypes ----------------------------------*/
void delay_loop(uint32_t);


int main(){
	leds_init();
	
	while(1){
		led_on(LED1);
		delay_loop(BLINK_DELAY_ITERATIONS);
		
		led_off(LED1);
		delay_loop(BLINK_DELAY_ITERATIONS);
	}
}


void delay_loop(uint32_t iterations){
	for (volatile uint32_t counter = 0; counter < iterations; counter++){
		continue;
	}
}
