#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: points to the first element in the list
 * @n: data to the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
