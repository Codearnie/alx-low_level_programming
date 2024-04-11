#include "hash_tables.h"

/**
 * key_index - Get an index for a given key
 * @key: key (string) to hash
 * @size: size of hash table
 *
 * Return: key index using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
