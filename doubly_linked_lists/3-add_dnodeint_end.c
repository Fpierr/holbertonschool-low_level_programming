#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: a pointer to the head of the list
 * @n: the integer value associated with each node
 *
 * Return: adress of the new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *current_node;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
		return (last_node);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	last_node->prev = current_node;
	current_node->next = last_node;

	return (last_node);
}
