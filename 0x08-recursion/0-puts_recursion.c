#include "main.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to be recursed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
