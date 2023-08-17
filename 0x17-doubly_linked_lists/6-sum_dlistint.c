#include "lists.h"

/**
 * sum_dlistint - Sum all the values
 * in a doubly linked list
 *
 * @head: head
 * Return: sum of values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
