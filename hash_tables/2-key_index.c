#include "hash.tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key of hash
 * @size: the size of array of the hash table
 *
 * Return: hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_dbj2(key) % size);
}
