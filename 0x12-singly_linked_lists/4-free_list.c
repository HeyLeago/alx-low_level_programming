#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Description:free_list - frees a list_t list
 * @head: pointer to a pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *temp, *store
		temp = head;

	while (temp)
	{
		store = temp->next;
		free(temp);
		head = temp;
	}
}
