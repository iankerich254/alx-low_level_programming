#include "hash_tables.h"

/**
 * key_index - get index at which key/value pair should be stored in array__
 * @key: key to get the index of
 * @size: size of the array of the hash table.
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
