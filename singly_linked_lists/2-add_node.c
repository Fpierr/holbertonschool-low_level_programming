#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: the head of the list
 * @str: the string to add to the list by strdup duplicate function
 *
 * Return: a pointer point to the firt element of the head list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	size_t new_len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[new_len] != '\0')
		new_len++;

	new_node->str = new_str;
	new_node->len = new_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
