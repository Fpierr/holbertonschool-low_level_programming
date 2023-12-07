#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(key, current_node->key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
