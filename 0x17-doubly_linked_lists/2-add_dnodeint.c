#include "lists.h"

/**
 * add_dnodeint - adds node at start of a list
 *
 * @n: Nodes data
 * @head: pointer to the head node
 * Return: address to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;


	if (*head == NULL)
		*head = newnode;
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);


}
