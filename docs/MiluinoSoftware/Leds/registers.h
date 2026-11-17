/** ****************************************************************************
 * @file    registers.h
 * @brief   Access to memory-mapped hardware registers.
 **************************************************************************** */

#ifndef REGISTERS_H
#define REGISTERS_H

/* Includes --------------------------------------------------------------------*/
#include <stdint.h>

/* Defines ---------------------------------------------------------------------*/

/* Volatile requires a register access each time the expression is evaluated. */
#define REG32(address)          (*(volatile uint32_t *)(address))

#endif /* REGISTERS_H */
