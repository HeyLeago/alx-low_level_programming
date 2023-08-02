#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 *@h: node to print
 *
 * Description: This function prints all the elements in a singly linked list
 * return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h) /*returns the size of the list*/
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
