#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node
 *
 * @head: head of the list
 * @index: the specified node
 * Return: null if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);

}
