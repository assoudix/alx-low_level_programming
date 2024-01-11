#include "lists.h"

/**
 * sum_dlistint - sums all the elements of a doubly linked list
 *
 *
 * @head: head
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
int node_sum;

node_sum = 0;

if (head == NULL)
return (node_sum);

while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
node_sum += head->n;
head = head->next;
}

return (node_sum);
}
