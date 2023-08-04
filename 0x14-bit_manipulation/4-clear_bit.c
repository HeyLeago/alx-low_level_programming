#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n:the number to be changed
 * @index: index of the bit to set to 0
 *
 * Return: true for success, false for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
