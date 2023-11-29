#include "lists.h"

/**
 * add_dnodeint - add new node to the beginning of a dlistint_t list
 * @head: the pointer taht point to the head of the list
 * @n: the integer value associated with each node
 *
 * Return: the adress of element, or NULL is faillure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}

