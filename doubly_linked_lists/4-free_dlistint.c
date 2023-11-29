#include "lists.h"

/**
 * free_dlistint - free the doubly linked list to type dlistint_t
 * @head: the pointer to list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
