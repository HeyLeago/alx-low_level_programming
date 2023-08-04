#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * @n: original number
 * @m: number to change to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	int i = 63;

	while (i >= 0)
	{
		unsigned long int current = xor >> i;

		if (current & 1)
			num++;
		i--;
	}

	return (num);
}

