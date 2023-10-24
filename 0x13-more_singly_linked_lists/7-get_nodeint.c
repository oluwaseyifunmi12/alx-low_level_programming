#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If fail, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head->next);
		}

		head = head->next;
		count++;
	}
	return (head);
}
