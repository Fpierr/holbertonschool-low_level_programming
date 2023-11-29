#include "lists.h"

/**
 * list_len - function that return the number of elements in a linked list
 * @h: the pointer that point to the structure called list_t
 *
 * Return: the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t len_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		len_count++;
		h = h->next;
	}
	return (len_count);
}
