#include "hash_tables.h"
/**
 * key_index - function that gets the index for storing
 * a key in a hash table.
 * @key:key to get the index of.
 * @size: size of the hash table array
 * Return: return the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
