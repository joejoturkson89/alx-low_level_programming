#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @c: character to compare
 * Return: 1 for positive num,0 for zero or -1 for negative
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	if (i == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(45);
	return (-1);
}
