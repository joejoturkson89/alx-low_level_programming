#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - reverses a string
 * @s: string to print
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s ¡= '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
	_putchar(s);
	s--;
	}
	_putchar('\n');
}
