iinclude "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specified position
 * @head: head of the list.
 * @idx: index of where the new node is inserted
 * @n: integer element.
 * Return: the address of the new node or NULL.
 */

int delete_nodeint_at_index(struct listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	listint_t *prev;
        unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{

		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++
	}

	if (current == NULL)
	{
		return (-1);
	}

        prev->next = current->next;
        free(current);

	return (1);

}
