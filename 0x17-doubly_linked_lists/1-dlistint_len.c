#include "lists.h"

/**
 * dlistint_len - gives the length of a node
 *
 * @h: the head node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;

		printf("\n");
	}

	return (count);
}
