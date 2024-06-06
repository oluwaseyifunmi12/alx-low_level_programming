#include "lists.h"

/**
 * print_list - a function that prints elements of list_t
 * @h: name of singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else

			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		size++;

	}
	return (size);
}
