#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nxt;

	prev = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	*head = prev;
	return (*head);
}
