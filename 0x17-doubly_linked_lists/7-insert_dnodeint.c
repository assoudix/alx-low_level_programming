#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at
 * predefined index
 *
 * @h: head
 * @idx: index
 * @n: value
 * Return: address node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *traverse_pointer;
	unsigned int current_position;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		traverse_pointer = *h;
		current_position = 1;
		while (traverse_pointer)
		{
			if (current_position == idx)
			{
				if (traverse_pointer->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = traverse_pointer->next;
						new->prev = traverse_pointer;
						traverse_pointer->next->prev = new;
						traverse_pointer->next = new;
					}
				}
				break;
			}
			traverse_pointer = traverse_pointer->next;
			current_position++;
		}
	}

	return (new);
}
