/** ****************************************************************************
 * @file    leds.c
 * @brief   GPIO initialization and control for LEDs HL1-HL4.
 **************************************************************************** */

/* Includes --------------------------------------------------------------------*/
#include "leds.h"
#include "gpio.h"

/* Functions -------------------------------------------------------------------*/

/** @brief Initializes the GPIO pins for all four LEDs in sequence. */
void leds_init(void)
{
	led_1_init();
	led_2_init();
	led_3_init();
	led_4_init();
}

/**
 * @brief Initializes the GPIO pin for the selected LED.
 * @param led LED identifier from LED1 to LED4.
 */
void led_init(led_t led)
{
	switch (led)
	{
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

/** @brief Configures PC2 as a digital output with a slow slew rate. */
void led_1_init(void)
{
	/* Enable the port clock while preserving the other PER_CLOCK bits. */
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTC_EN;

	/* Clear the PC2 settings and disable its output driver with PWR = 00. */
	PORTC_OE &= ~LED1_MASK;
	PORTC_FUNC &= ~LED1_CONFIG_MASK;
	PORTC_ANALOG &= ~LED1_MASK;
	PORTC_PULL &= ~LED1_PULL_DOWN_MASK;
	PORTC_PULL &= ~LED1_PULL_UP_MASK;
	PORTC_PWR &= ~LED1_CONFIG_MASK;

	/* Select digital output with a slow slew rate and drive the LED pin low. */
	PORTC_OE |= LED1_MASK;
	PORTC_ANALOG |= LED1_MASK;
	PORTC_PWR |= (GPIO_PWR_MODE_SLOW << LED1_CONFIG_BIT_OFFSET);
	PORTC_RXTX &= ~LED1_MASK;
}

/** @brief Configures PA3 as a digital output with a slow slew rate. */
void led_2_init(void)
{
	/* Enable the port clock while preserving the other PER_CLOCK bits. */
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;

	/* Clear the PA3 settings and disable its output driver with PWR = 00. */
	PORTA_OE &= ~LED2_MASK;
	PORTA_FUNC &= ~LED2_CONFIG_MASK;
	PORTA_ANALOG &= ~LED2_MASK;
	PORTA_PULL &= ~LED2_PULL_DOWN_MASK;
	PORTA_PULL &= ~LED2_PULL_UP_MASK;
	PORTA_PWR &= ~LED2_CONFIG_MASK;

	/* Select digital output with a slow slew rate and drive the LED pin low. */
	PORTA_OE |= LED2_MASK;
	PORTA_ANALOG |= LED2_MASK;
	PORTA_PWR |= (GPIO_PWR_MODE_SLOW << LED2_CONFIG_BIT_OFFSET);
	PORTA_RXTX &= ~LED2_MASK;
}

/** @brief Configures PA5 as a digital output with a slow slew rate. */
void led_3_init(void)
{
	/* Enable the port clock while preserving the other PER_CLOCK bits. */
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;

	/* Clear the PA5 settings and disable its output driver with PWR = 00. */
	PORTA_OE &= ~LED3_MASK;
	PORTA_FUNC &= ~LED3_CONFIG_MASK;
	PORTA_ANALOG &= ~LED3_MASK;
	PORTA_PULL &= ~LED3_PULL_DOWN_MASK;
	PORTA_PULL &= ~LED3_PULL_UP_MASK;
	PORTA_PWR &= ~LED3_CONFIG_MASK;

	/* Select digital output with a slow slew rate and drive the LED pin low. */
	PORTA_OE |= LED3_MASK;
	PORTA_ANALOG |= LED3_MASK;
	PORTA_PWR |= (GPIO_PWR_MODE_SLOW << LED3_CONFIG_BIT_OFFSET);
	PORTA_RXTX &= ~LED3_MASK;
}

/** @brief Configures PA1 as a digital output with a slow slew rate. */
void led_4_init(void)
{
	/* Enable the port clock while preserving the other PER_CLOCK bits. */
	RST_CLK_PER_CLOCK |= RST_CLK_PER_CLOCK_PORTA_EN;

	/* Clear the PA1 settings and disable its output driver with PWR = 00. */
	PORTA_OE &= ~LED4_MASK;
	PORTA_FUNC &= ~LED4_CONFIG_MASK;
	PORTA_ANALOG &= ~LED4_MASK;
	PORTA_PULL &= ~LED4_PULL_DOWN_MASK;
	PORTA_PULL &= ~LED4_PULL_UP_MASK;
	PORTA_PWR &= ~LED4_CONFIG_MASK;

	/* Select digital output with a slow slew rate and drive the LED pin low. */
	PORTA_OE |= LED4_MASK;
	PORTA_ANALOG |= LED4_MASK;
	PORTA_PWR |= (GPIO_PWR_MODE_SLOW << LED4_CONFIG_BIT_OFFSET);
	PORTA_RXTX &= ~LED4_MASK;
}

/**
 * @brief Turns the selected LED on by driving its pin high.
 * @param led LED identifier from LED1 to LED4.
 * @note Unknown identifiers are ignored.
 */
void led_on(led_t led)
{
	switch (led)
	{
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

/**
 * @brief Turns the selected LED off by driving its pin low.
 * @param led LED identifier from LED1 to LED4.
 * @note Unknown identifiers are ignored.
 */
void led_off(led_t led)
{
	switch (led)
	{
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
