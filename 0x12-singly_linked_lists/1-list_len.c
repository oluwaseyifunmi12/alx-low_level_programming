#include "lists.h"

/**
 * list_len - a function prints elements of list_t
 * @h:  name singly linked list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;

	while (h != NULL)
	{

		h = h->next;
		number++;

	}
	return (number);
}
