#include "main.h"
/**
 * flip_bits - function that calls number of bits you would need to flip
 * to get from one number to the another
 * @n: the parameter
 * @m: destination
 * Return: nflip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j, nflips = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (j = 0; j < k; j++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
