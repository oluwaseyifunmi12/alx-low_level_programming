#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 1;

	if (idx == 0)
		newnode = *h;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;

	return (newnode);

}
