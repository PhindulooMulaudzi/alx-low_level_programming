#include "hash_tables.h"

/**
 * key_index - Get the index to store key/value pair
 *
 * @key: The key.
 * @size: The size of thetable.
 *
 * Return: Index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
