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
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s' : '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma_flag = 1;
		}
		index++;
	}
	puts("}");
}
