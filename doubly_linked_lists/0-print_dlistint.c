#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: the pointer content the element to print
 *
 * Return: The number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		count_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_node);
}
