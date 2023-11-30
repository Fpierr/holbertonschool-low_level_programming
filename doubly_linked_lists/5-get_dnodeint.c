#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node (the position of n) of a dlnked
 * @head: the pointer to head to the linked list
 * @index: the inxed taht give the position of the node
 *
 * Return: NULL if head equal NULL, else return the position of head index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while (index != 0)
	{
		if (head == NULL)
			return (NULL);

		tmp->next = head;
		index--;
	}
	return (tmp);
}
