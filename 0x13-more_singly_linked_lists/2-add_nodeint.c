#include "lists.h"

/**
 * add_nodeint - add a newnode at the beginning of list
 * @head: head of the list.
 * @n: content of newnode.
 *
 * Return: address of the new element. NUll if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
