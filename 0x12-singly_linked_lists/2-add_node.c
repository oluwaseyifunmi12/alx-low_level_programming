#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node to a linked list
 * @head: - the head node
 * @str: - string to be printed out
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	size_t size = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	while (str[size])
		size++;

	newnode->len = size;

	newnode->next = *head;

	*head = newnode;

	return (*head);
}

