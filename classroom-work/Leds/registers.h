#ifndef REGISTERS_H
#define REGISTERS_H

/* Includes ----------------------------------------------*/
#include <stdint.h>

/* Defines -----------------------------------------------*/
#define REG32(address)		(*(volatile uint32_t *)(address))


#endif /* REGISTERS_H */
