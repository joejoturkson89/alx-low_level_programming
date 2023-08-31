#include "main.h"
/**
 * get_bit - function that returns the value of
 * a bit at a given index
 * @n: unsigned long integer to search
 * @index: index to return
 * Return: return the value of the bit at index
 * or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
