#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: listint_t to traverse
 *
 * Return: number of nodes in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
