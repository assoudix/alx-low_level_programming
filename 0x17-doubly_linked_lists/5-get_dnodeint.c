#include "lists.h"

/**
 * get_dnodeint_at_index - finds an element with an index in a dllist
 * @head: head ptr
 * @index: index of the node to be found
 * Return: node corresponding to index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_position;
	dlistint_t *traverse_pointer;

	current_position = 0;
	if (head == NULL)
	return (NULL);

	traverse_pointer = head;
	while (traverse_pointer != NULL)
	{
	if (index == current_position)
	return (traverse_pointer);
	current_position++;
	traverse_pointer = traverse_pointer->next;
	}
	return (NULL);
}
