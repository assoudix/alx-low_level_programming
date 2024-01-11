#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a doubly linked list
 *
 * @head: head
 * @n: value
 * Return: the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *itervar;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	itervar = *head;

	if (itervar != NULL)
	{
		while (itervar->next != NULL)
			itervar = itervar->next;
		itervar->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = itervar;

	return (new);
}
