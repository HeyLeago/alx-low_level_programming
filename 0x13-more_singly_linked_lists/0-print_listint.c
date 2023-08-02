#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 *@h: node to print
 *
 * Description: This function prints all the elements in a singly linked list
 * return: the number of nodes
*/
size_t print_listint(const listint_t *h) /*returns the size of the list*/
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
