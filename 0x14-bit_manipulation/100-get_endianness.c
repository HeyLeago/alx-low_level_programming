#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianess of a machine
 * Return: 1 for little endian, 0 for little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
