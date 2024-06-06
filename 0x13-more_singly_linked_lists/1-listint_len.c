#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 *
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{

		count++;
		temp = temp->next;

	}

	return (count);

}
