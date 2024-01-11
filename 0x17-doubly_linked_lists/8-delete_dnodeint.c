#include "lists.h"

/**
 * delete_dnodeint_at_index - delete indexed node
 *
 *
 * @head: head
 * @index: index
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse_ptr;
	unsigned int pos;

	traverse_ptr = *head;
	pos = 0;

	while (traverse_ptr != NULL)
	{
		if (pos == index)
		{
			if (pos == 0)
			{
				*head = traverse_ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				traverse_ptr->prev->next = traverse_ptr->next;

				if (traverse_ptr->next != NULL)
					traverse_ptr->next->prev = traverse_ptr->prev;
			}

			free(traverse_ptr);
			return (1);
		}
		traverse_ptr = traverse_ptr->next;
		pos++;
	}

	return (-1);
}
