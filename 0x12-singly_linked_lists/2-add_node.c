#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *Description: add_node adds a node to the beginning of list_t
 *
 *@str: String added to node
 *@head: Points to the list
 *
 * Return:The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	do {
		len++;
	} while (str[len] != '\0');

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

