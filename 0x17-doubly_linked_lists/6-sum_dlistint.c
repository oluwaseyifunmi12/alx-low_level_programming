#include "lists.h"

/**
 * sum_dlistint - returns the sum of a list
 *
 * @head: head of the list
 * Return: sum value
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
