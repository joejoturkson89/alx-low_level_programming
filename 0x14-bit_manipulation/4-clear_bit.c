#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: unsigned long integer to change
 * @index: index to chnage to 0
 * Return: return 1 if it run or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);

	return (1);
}
