#include "lists.h"

/**
 * print_listint - prints the content of a linked list
 *
 * @h: head note
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);

}
