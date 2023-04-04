#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints elements of list_t
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{

		h = h->next;
		size++;

	}
	return (size);
}
