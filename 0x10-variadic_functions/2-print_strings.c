#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: pointer parameter
 * @n: parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	char *str;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
