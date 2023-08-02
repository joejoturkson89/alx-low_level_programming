#include "main.h"
/**
 * _print_rev_recursion - prints recursion in reverse
 * @s: string to be recursed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
