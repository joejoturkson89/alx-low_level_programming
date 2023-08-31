#include "main.h"
/**
 * get_endianness - functions thats checks the foe endianness
 * Return: return 0 if big endian and 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *a = (char *)&x;

	if (*a)
		return (1);
	else
		return (0);
}
