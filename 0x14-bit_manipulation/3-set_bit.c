#include "main.h"
/**
 * set_bit - functions that sets the value of a bit
 * to 1 at a given index
 * @n: unsigned long integer to be changed
 * @index: index to be changed
 * Return: return 1 if it run or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
