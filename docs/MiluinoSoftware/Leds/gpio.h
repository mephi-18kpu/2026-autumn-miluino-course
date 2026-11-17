/** ****************************************************************************
 * @file    gpio.h
 * @brief   GPIO registers and clock enables for the LED ports.
 **************************************************************************** */

#ifndef GPIO_H
#define GPIO_H

/* Includes --------------------------------------------------------------------*/
#include "registers.h"

/* Registers -------------------------------------------------------------------*/

#define RST_CLK_BASE                    0x40020000UL
#define RST_CLK_PER_CLOCK               REG32(RST_CLK_BASE + 0x1CUL)
#define RST_CLK_PER_CLOCK_PORTA_POS     21UL
#define RST_CLK_PER_CLOCK_PORTA_EN      (1UL << RST_CLK_PER_CLOCK_PORTA_POS)
#define RST_CLK_PER_CLOCK_PORTC_POS     23UL
#define RST_CLK_PER_CLOCK_PORTC_EN      (1UL << RST_CLK_PER_CLOCK_PORTC_POS)

#define PORTA_BASE              0x400A8000UL
#define PORTA_RXTX              REG32(PORTA_BASE + 0x00UL)
#define PORTA_OE                REG32(PORTA_BASE + 0x04UL)
#define PORTA_FUNC              REG32(PORTA_BASE + 0x08UL)
#define PORTA_ANALOG            REG32(PORTA_BASE + 0x0CUL)
#define PORTA_PULL              REG32(PORTA_BASE + 0x10UL)
#define PORTA_PD                REG32(PORTA_BASE + 0x14UL)
#define PORTA_PWR               REG32(PORTA_BASE + 0x18UL)
#define PORTA_GFEN              REG32(PORTA_BASE + 0x1CUL)

#define PORTC_BASE              0x400B8000UL
#define PORTC_RXTX              REG32(PORTC_BASE + 0x00UL)
#define PORTC_OE                REG32(PORTC_BASE + 0x04UL)
#define PORTC_FUNC              REG32(PORTC_BASE + 0x08UL)
#define PORTC_ANALOG            REG32(PORTC_BASE + 0x0CUL)
#define PORTC_PULL              REG32(PORTC_BASE + 0x10UL)
#define PORTC_PD                REG32(PORTC_BASE + 0x14UL)
#define PORTC_PWR               REG32(PORTC_BASE + 0x18UL)
#define PORTC_GFEN              REG32(PORTC_BASE + 0x1CUL)

/* GPIO configuration ----------------------------------------------------------*/

#define GPIO_FUNC_PWR_BITS_PER_PIN  2UL  /* Two bits per pin in FUNC and PWR. */
#define GPIO_FUNC_PWR_FIELD_MASK    3UL  /* Unshifted mask for one two-bit field. */
#define GPIO_PULL_UP_BIT_OFFSET     16UL /* First pull-up bit in PULL. */
#define GPIO_PWR_MODE_SLOW          1UL  /* 01 selects the slow slew rate. */

#endif /* GPIO_H */
