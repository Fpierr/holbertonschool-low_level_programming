#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if(head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
