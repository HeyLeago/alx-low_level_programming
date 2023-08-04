#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index to
 * @n: number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
