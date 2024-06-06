#include "lists.h"

/**
 * pop_listint - removes the head node
 *
 * @head: the head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *address;
	listint_t *copy;
	int data;

	if (*head == NULL)
		return (0);

	copy = *head;

	data = copy->n;
	address = copy->next;

	free(copy);
	*head = address;

	return (data);
}
