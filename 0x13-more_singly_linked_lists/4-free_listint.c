#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: head of the list.
 *
 * Return: NULL.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)

	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
