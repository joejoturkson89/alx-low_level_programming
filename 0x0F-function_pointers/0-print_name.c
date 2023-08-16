#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name that is passed to it
 * @name: char to display
 * @f: pointer function
 * Return: no return because VOID was declared as R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
