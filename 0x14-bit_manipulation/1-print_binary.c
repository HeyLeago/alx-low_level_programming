#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i = 63;
	int total = 0;

	while (i >= 0)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			total++;
		}
		else if (total)
			putchar('0');

		i--;
	}
	if (!total)
		putchar('0');
}
