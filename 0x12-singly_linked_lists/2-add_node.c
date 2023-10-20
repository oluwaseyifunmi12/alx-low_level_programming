#include "lists.h"

/**
 * add_node - this function adds a new node to a linked list
 * @head: - the head node
 * @str: - the string to be printed out
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nextnode;

	size_t size = 0;

	nextnode = malloc(sizeof(list_t));

	if (nextnode == NULL)
		return (NULL);

	nextnode->str = strdup(str);

	while (str[size])
		size++;

	nextnode->len = size;

	nextnode->next = *head;

	*head = nextnode;

	return (*head);
}
