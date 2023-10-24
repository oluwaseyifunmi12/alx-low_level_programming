#include "lists.h"

/**
 * free_listint2 - this function frees a linked list
 * @head: head of a list.
 *
 * Return: NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *newnode;

	if (head != NULL)
	{
		newnode = *head;

		while (newnode != NULL)
		{
			tmp = newnode;
			newnode = newnode->next;
			free(tmp);
		}
		*head = NULL;
	}
}
