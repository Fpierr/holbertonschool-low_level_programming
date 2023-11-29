#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 * @h: the pointer content element
 *
 * Return: the nummber of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_len = 0;

	while (h)
	{
		count_len++;
		h = h->next;
	}
	return (count_len);
}
