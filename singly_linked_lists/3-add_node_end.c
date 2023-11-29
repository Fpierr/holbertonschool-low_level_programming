#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head of the listt
 * @str: the string of the node
 *
 * Return: the adress of new element, or NULL if faillure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *current_node = NULL;
	char *new_str;
	size_t new_len = 0;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	while (str[new_len] != '\0')
		new_len++;

	last_node->str = new_str;
	last_node->len = new_len;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = last_node;
	}
	return (last_node);
}
