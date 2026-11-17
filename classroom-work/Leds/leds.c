/* Includes ---------------------------------------------*/
#include "leds.h"

void leds_init(){
	led_1_init();
	led_2_init();
	led_3_init();
	led_4_init();
}

void led_init(led_t led){
	switch (led){
		case LED1:
			led_1_init();
			break;
		case LED2:
			led_2_init();
			break;
		case LED3:
			led_3_init();
			break;
		case LED4:
			led_4_init();
			break;		
	}
}


void led_1_init(){
	// Enable CLK for PortC
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTC_EN;
	
	// Reset led_1 registers
	PORTC_OE	 		&= ~LED1_MASK;
	PORTC_FUNC 		&= ~LED1_CONFIG_MASK;
	PORTC_ANALOG 	&= ~LED1_MASK;
	PORTC_PULL		&= ~LED1_PULL_DOWN_MASK;
	PORTC_PULL		&= ~LED1_PULL_UP_MASK;
	PORTC_PWR  		&= ~LED1_CONFIG_MASK;
	
	// Setup led_1
	PORTC_OE			|= LED1_MASK;
	PORTC_ANALOG	|= LED1_MASK;
	PORTC_PWR			|= (GPIO_PWR_MODE_SLOW << LED1_CONFIG_BIT_OFFSET);
	PORTC_RXTX 		&= ~LED1_MASK;
}

void led_2_init(){
	// Enable CLK for PortA
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;
	
	// Reset led_2 registers
	PORTA_OE	 		&= ~LED2_MASK;
	PORTA_FUNC 		&= ~LED2_CONFIG_MASK;
	PORTA_ANALOG 	&= ~LED2_MASK;
	PORTA_PULL		&= ~LED2_PULL_DOWN_MASK;
	PORTA_PULL		&= ~LED2_PULL_UP_MASK;
	PORTA_PWR  		&= ~LED2_CONFIG_MASK;
	
	// Setup led_2
	PORTA_OE			|= LED2_MASK;
	PORTA_ANALOG	|= LED2_MASK;
	PORTA_PWR			|= (GPIO_PWR_MODE_SLOW << LED2_CONFIG_BIT_OFFSET);
	PORTA_RXTX 		&= ~LED2_MASK;
}

void led_3_init(){
	// Enable CLK for PortA
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;
	
	// Reset led_3 registers
	PORTA_OE	 		&= ~LED3_MASK;
	PORTA_FUNC 		&= ~LED3_CONFIG_MASK;
	PORTA_ANALOG 	&= ~LED3_MASK;
	PORTA_PULL		&= ~LED3_PULL_DOWN_MASK;
	PORTA_PULL		&= ~LED3_PULL_UP_MASK;
	PORTA_PWR  		&= ~LED3_CONFIG_MASK;
	
	// Setup led_3
	PORTA_OE			|= LED3_MASK;
	PORTA_ANALOG	|= LED3_MASK;
	PORTA_PWR			|= (GPIO_PWR_MODE_SLOW << LED3_CONFIG_BIT_OFFSET);
	PORTA_RXTX 		&= ~LED3_MASK;
}


void led_4_init(){
	// Enable CLK for PortA
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;
	
	// Reset led_4 registers
	PORTA_OE	 		&= ~LED4_MASK;
	PORTA_FUNC 		&= ~LED4_CONFIG_MASK;
	PORTA_ANALOG 	&= ~LED4_MASK;
	PORTA_PULL		&= ~LED4_PULL_DOWN_MASK;
	PORTA_PULL		&= ~LED4_PULL_UP_MASK;
	PORTA_PWR  		&= ~LED4_CONFIG_MASK;
	
	// Setup led_4
	PORTA_OE			|= LED4_MASK;
	PORTA_ANALOG	|= LED4_MASK;
	PORTA_PWR			|= (GPIO_PWR_MODE_SLOW << LED4_CONFIG_BIT_OFFSET);
	PORTA_RXTX 		&= ~LED4_MASK;
}

void led_on(led_t led){
	switch (led){
		case LED1:
			PORTC_RXTX |= LED1_MASK;
			break;
		
		case LED2:
			PORTA_RXTX |= LED2_MASK;
			break;
		
		case LED3:
			PORTA_RXTX |= LED3_MASK;
			break;
		
		case LED4:
			PORTA_RXTX |= LED4_MASK;
			break;		
	}
}


void led_off(led_t led){
	switch (led){
		case LED1:
			PORTC_RXTX &= ~LED1_MASK;
			break;
		
		case LED2:
			PORTA_RXTX &= ~LED2_MASK;
			break;
		
		case LED3:
			PORTA_RXTX &= ~LED3_MASK;
			break;
		
		case LED4:
			PORTA_RXTX &= ~LED4_MASK;
			break;		
	}
}
