#include "hash_tables.h"
/**
 * hash_djb2 - Hash function that implements the djb2 algorithm
 * @str: string to the hash
 * Return: return the hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++) != 0)
		hash = ((hash << 5) + hash) + i;

	return (hash);
}
