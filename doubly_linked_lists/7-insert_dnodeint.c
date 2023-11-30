#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the pointer pointer to the linked list
 * @idx: the index of position to insert the new node
 * @n: the integer value taht content the new node
 *
 * Return: a pointer to new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
		else if (tmp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		idx++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	(tmp->next)->prev = new_node;
	new_node = tmp->next;

	return (new_node);
}
