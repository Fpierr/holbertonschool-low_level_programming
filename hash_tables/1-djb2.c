#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: the string associate to the hash
 *
 * Return: the specifique number of hash to evite colision
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while (((c = *str++)))
	{
		hash = ((hash << 5) + hash) + C; /* hash * 33 + c */
	}
	return (hash);
}
