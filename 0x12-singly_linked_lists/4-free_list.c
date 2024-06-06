#include "lists.h"

/**
 * free_list - fa function that rees a list
 * @head: the head of the linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *select;

	while ((select = head) != NULL)
	{
		head = head->next;
		free(select->str);
		free(select);
	}
}
