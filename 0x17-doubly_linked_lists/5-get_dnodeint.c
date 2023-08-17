#include "lists.h"

/**
 * get_dnodeint_at_index - gets the
 * node at a given index of
 * a dlistint_t linked list
 *
 * @head: head
 * @index: index of node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
