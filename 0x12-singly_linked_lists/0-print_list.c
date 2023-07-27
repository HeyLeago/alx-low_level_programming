#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a linked list
 * @h: is a pointer to the list_t list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while h != 0
	{
		if (!h->str)
		{
			putchar('[');
			putchar('0');
			putchar(']');
			putchar(' ');
			putchar('(');
			putchar('n');
			putchar('i');
			putchar('l');
			putchar(')');
			putchar('\n');
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
