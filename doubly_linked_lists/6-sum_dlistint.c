#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data n of a dlistint_t linked list
 * @head: a pointer to the first element
 *
 * Return: sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;	
	}
	return (sum);
}
