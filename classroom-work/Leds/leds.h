#ifndef LEDS_H
#define LEDS_H

/* Includes --------------------------------------------*/
#include "gpio.h"

/* Defines ---------------------------------------------*/

// HL1: PC2 **********************************************
#define LED1_PIN			2UL
#define LED1_MASK			(1UL << LED1_PIN)

#define LED1_CONFIG_BIT_OFFSET	(GPIO_FUNC_PWR_BITS_PER_PIN * LED1_PIN)
#define LED1_CONFIG_MASK				(GPIO_FUNC_PWR_FIELD_MASK << LED1_CONFIG_BIT_OFFSET)

#define LED1_PULL_DOWN_MASK 		LED1_MASK
#define LED1_PULL_UP_MASK				(LED1_MASK << GPIO_PULL_UP_BIT_OFFSET)


// HL2: PA3 **********************************************
#define LED2_PIN			3UL
#define LED2_MASK			(1UL << LED2_PIN)

#define LED2_CONFIG_BIT_OFFSET	(GPIO_FUNC_PWR_BITS_PER_PIN * LED2_PIN)
#define LED2_CONFIG_MASK				(GPIO_FUNC_PWR_FIELD_MASK << LED2_CONFIG_BIT_OFFSET)

#define LED2_PULL_DOWN_MASK 		LED2_MASK
#define LED2_PULL_UP_MASK				(LED2_MASK << GPIO_PULL_UP_BIT_OFFSET)


// HL3: PA5 **********************************************
#define LED3_PIN			5UL
#define LED3_MASK			(1UL << LED3_PIN)

#define LED3_CONFIG_BIT_OFFSET	(GPIO_FUNC_PWR_BITS_PER_PIN * LED3_PIN)
#define LED3_CONFIG_MASK				(GPIO_FUNC_PWR_FIELD_MASK << LED3_CONFIG_BIT_OFFSET)

#define LED3_PULL_DOWN_MASK 		LED3_MASK
#define LED3_PULL_UP_MASK				(LED3_MASK << GPIO_PULL_UP_BIT_OFFSET)


// HL4: PA1 **********************************************
#define LED4_PIN			1UL
#define LED4_MASK			(1UL << LED4_PIN)

#define LED4_CONFIG_BIT_OFFSET	(GPIO_FUNC_PWR_BITS_PER_PIN * LED4_PIN)
#define LED4_CONFIG_MASK				(GPIO_FUNC_PWR_FIELD_MASK << LED4_CONFIG_BIT_OFFSET)

#define LED4_PULL_DOWN_MASK 		LED4_MASK
#define LED4_PULL_UP_MASK				(LED4_MASK << GPIO_PULL_UP_BIT_OFFSET)


#endif /* LEDS_H */
