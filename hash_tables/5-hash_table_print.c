#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void, if ht il NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL || ht->size == '\0')
		return;

	putchar('{');
	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node != NULL)
		{
			printf("%s '%s' : '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		index++;
	}
	putchar('}');
	putchar('\n');
}
