#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be changed
 * @index: index of the bit to be set
 *
 * Return: true for success, false for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (false);

	*n |= (1UL << index);
	return (true);
}
