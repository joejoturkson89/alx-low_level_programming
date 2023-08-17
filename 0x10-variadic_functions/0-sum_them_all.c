#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that adds up numbers
 * @n: parameter
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (j = 0; j < n; j++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
