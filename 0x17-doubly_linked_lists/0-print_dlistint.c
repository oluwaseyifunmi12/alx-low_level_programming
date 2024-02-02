#include "lists.h"

/**
 * print_dlistint - prints all the nodes of dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;

	int count = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		count++;
		current = current->next;

		printf("\n");
	}

	return (count);

}
