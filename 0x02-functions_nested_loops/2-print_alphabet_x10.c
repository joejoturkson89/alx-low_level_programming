#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: always 0;
 */

void print_alphabet_x10(void)
{
	char i;
	char n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
