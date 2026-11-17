#ifndef GPIO_H
#define GPIO_H

/* Includes --------------------------------------------*/
#include "registers.h"

/* Defines ---------------------------------------------*/
#define PORTA_BASE				0x0x400A8000UL
#define PORTA_RXTX				REG32(PORTA_BASE + 0x00UL)
#define PORTA_OE					REG32(PORTA_BASE + 0x04UL)
#define PORTA_FUNC				REG32(PORTA_BASE + 0x08UL)
#define PORTA_ANALOG			REG32(PORTA_BASE + 0x0CUL)
#define PORTA_PULL				REG32(PORTA_BASE + 0x10UL)
#define PORTA_PD					REG32(PORTA_BASE + 0x14UL)
#define PORTA_PWR					REG32(PORTA_BASE + 0x18UL)
#define PORTA_GFEN				REG32(PORTA_BASE + 0x1CUL)

#define PORTC_BASE				0x400B8000UL
#define PORTC_RXTX				REG32(PORTC_BASE + 0x00UL)
#define PORTC_OE					REG32(PORTC_BASE + 0x04UL)
#define PORTC_FUNC				REG32(PORTC_BASE + 0x08UL)
#define PORTC_ANALOG			REG32(PORTC_BASE + 0x0CUL)
#define PORTC_PULL				REG32(PORTC_BASE + 0x10UL)
#define PORTC_PD					REG32(PORTC_BASE + 0x14UL)
#define PORTC_PWR					REG32(PORTC_BASE + 0x18UL)
#define PORTC_GFEN				REG32(PORTC_BASE + 0x1CUL)


// GPIO config ******************************************
#define GPIO_FUNC_PWR_BITS_PER_PIN		2UL
#define GPIO_FUNC_PWR_FIELD_MASK			3UL
#define GPIO_PULL_UP_BIT_OFFSET				16U

#define GPIO_PWR_MODE_SLOW				1UL
#define GPIO_PWR_MODE_FAST				2UL
#define GPIO_PWR_MODE_MAX_SPEED		3UL


#endif /* GPIO_H */
