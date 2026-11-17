#ifndef BUTTON_H
#define BUTTON_H


#include <stdint.h>
#include "gpio.h"




//DEFINEEEEEEEEE
#define BUTTON_PIN 								0UL
#define BUTTON_MASK								(1UL << BUTTON_PIN )	
#define BUTTON_CONFIG_BIT_OFFSET	(GPIO_FUNC_PWR_BITS_PER_PIN  * BUTTON_PIN)
#define BUTTON_CONFIG_MASK				(3UL << BUTTON_CONFIG_BIT_OFFSET)
#define BUTTON_PULL_DOWN_MASK			BUTTON_MASK
#define BUTTON_PULL_UP_MASK			  (BUTTON_MASK << GPIO_PULL_UP_BIT_OFFSET)
//TYPES
typedef enum{
	BUTTON_RELEASED = 0,
	BUTTON_PRESSED
} button_state_t;

//Function prototypes
void button_init(void);
button_state_t button_get_state(void);


#endif
