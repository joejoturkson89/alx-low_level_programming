#include "main.h"
/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: number, unsigned long integer to be
 * represented in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
