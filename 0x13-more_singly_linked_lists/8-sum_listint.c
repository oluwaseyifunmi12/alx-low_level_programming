#include "lists.h"

/**
 * sum_listint - this function returns the sum of data in a list
 * @head: head of a list.
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
