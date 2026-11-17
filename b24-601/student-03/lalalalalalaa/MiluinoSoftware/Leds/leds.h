/** ****************************************************************************
 * @file    leds.h
 * @brief   Pin configuration and control functions for LEDs HL1-HL4.
 **************************************************************************** */

#ifndef LEDS_H
#define LEDS_H

/* Includes --------------------------------------------------------------------*/
#include "gpio.h"

/* LED configuration -----------------------------------------------------------*/

// HL1 on PC2 (package pin 40) **************************************************
#define LED1_PIN                2UL
#define LED1_MASK               (1UL << LED1_PIN)

// FUNC and PWR use two bits per pin. PC2 uses bits [5:4].
#define LED1_CONFIG_BIT_OFFSET  (GPIO_FUNC_PWR_BITS_PER_PIN * LED1_PIN)
#define LED1_CONFIG_MASK        (GPIO_FUNC_PWR_FIELD_MASK << LED1_CONFIG_BIT_OFFSET)

// In PULL, bits [31:16] control pull-ups and bits [15:0] control pull-downs.
#define LED1_PULL_DOWN_MASK     LED1_MASK
#define LED1_PULL_UP_MASK       (LED1_MASK << GPIO_PULL_UP_BIT_OFFSET)

// HL2 on PA3 (package pin 60) **************************************************
#define LED2_PIN                3UL
#define LED2_MASK               (1UL << LED2_PIN)
#define LED2_CONFIG_BIT_OFFSET  (GPIO_FUNC_PWR_BITS_PER_PIN * LED2_PIN)
#define LED2_CONFIG_MASK        (GPIO_FUNC_PWR_FIELD_MASK << LED2_CONFIG_BIT_OFFSET)
#define LED2_PULL_DOWN_MASK     LED2_MASK
#define LED2_PULL_UP_MASK       (LED2_MASK << GPIO_PULL_UP_BIT_OFFSET)

// HL3 on PA5 (package pin 58) **************************************************
#define LED3_PIN                5UL
#define LED3_MASK               (1UL << LED3_PIN)
#define LED3_CONFIG_BIT_OFFSET  (GPIO_FUNC_PWR_BITS_PER_PIN * LED3_PIN)
#define LED3_CONFIG_MASK        (GPIO_FUNC_PWR_FIELD_MASK << LED3_CONFIG_BIT_OFFSET)
#define LED3_PULL_DOWN_MASK     LED3_MASK
#define LED3_PULL_UP_MASK       (LED3_MASK << GPIO_PULL_UP_BIT_OFFSET)

// HL4 on PA1 (package pin 62) **************************************************
#define LED4_PIN                1UL
#define LED4_MASK               (1UL << LED4_PIN)
#define LED4_CONFIG_BIT_OFFSET  (GPIO_FUNC_PWR_BITS_PER_PIN * LED4_PIN)
#define LED4_CONFIG_MASK        (GPIO_FUNC_PWR_FIELD_MASK << LED4_CONFIG_BIT_OFFSET)
#define LED4_PULL_DOWN_MASK     LED4_MASK
#define LED4_PULL_UP_MASK       (LED4_MASK << GPIO_PULL_UP_BIT_OFFSET)

/* Types -----------------------------------------------------------------------*/

/** @brief LED identifiers used by the initialization and control functions. */
typedef enum
{
	LED1 = 1,
	LED2,
	LED3,
	LED4
} led_t;

/* Function prototypes ---------------------------------------------------------*/

/** @brief Initializes the GPIO pins for all four LEDs. */
void leds_init(void);

/**
 * @brief Initializes the GPIO pin for the selected LED.
 * @param led LED identifier from LED1 to LED4.
 * @note Unknown identifiers are ignored.
 */
void led_init(led_t led);

/** @brief Configures HL1 on PC2 and sets its initial state to off. */
void led_1_init(void);

/** @brief Configures HL2 on PA3 and sets its initial state to off. */
void led_2_init(void);

/** @brief Configures HL3 on PA5 and sets its initial state to off. */
void led_3_init(void);

/** @brief Configures HL4 on PA1 and sets its initial state to off. */
void led_4_init(void);

/**
 * @brief Turns the selected LED on.
 * @param led LED identifier from LED1 to LED4.
 * @note Unknown identifiers are ignored.
 */
void led_on(led_t led);

/**
 * @brief Turns the selected LED off.
 * @param led LED identifier from LED1 to LED4.
 * @note Unknown identifiers are ignored.
 */
void led_off(led_t led);

#endif /* LEDS_H */
