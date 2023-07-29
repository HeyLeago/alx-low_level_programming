#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *Description: first prints a message before main
 *
 *Return: nothing
*/

void first(void) __attribute__ ((constructor));

void first(void)
{
	puts("You're beat! and yet, you must allow,");
	puts("I bore my house upon my back!");
}
