/* Includes --------------------------------------------------------------------*/
#include "main.h"

/* Private defines -------------------------------------------------------------*/

/* Number of iterations used to approximate the delay. */
#define BLINK_DELAY_ITERATIONS  4000000UL

/* Function prototypes ---------------------------------------------------------*/
void delay_loop(uint32_t iterations);

/**
 * @brief Initializes all LEDs and blinks HL1.
 * @return This function never returns.
 */
int main(void)
{
	leds_init();

	/* Toggle HL1 with a delay between state changes. */
	while (1)
	{
		led_on(LED1);
		delay_loop(BLINK_DELAY_ITERATIONS);

		led_off(LED1);
		delay_loop(BLINK_DELAY_ITERATIONS);
	}
}

/**
 * @brief Performs an approximate busy-wait delay.
 * @param iterations Number of loop iterations.
 * @note  volatile keeps the counter accesses during optimization. The delay depends
 *        on the core clock, compiler, and optimization settings.
 */
void delay_loop(uint32_t iterations)
{
	for (volatile uint32_t counter = 0U; counter < iterations; ++counter)
	{
		continue;
	}
}
