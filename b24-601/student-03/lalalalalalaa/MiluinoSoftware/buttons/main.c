#include "main.h"
#include "button.h"
#include "leds.h"

int main(){
	button_init();
	leds_init();
	button_state_t button_state;
	
	
	while(1){
		button_state = button_get_state();
		
		
		switch(button_state){
			case BUTTON_PRESSED:
				led_on(LED1);
				break;
			
			
			case BUTTON_RELEASED:
				led_off(LED1);
				break;
		
		}
	}	
}
