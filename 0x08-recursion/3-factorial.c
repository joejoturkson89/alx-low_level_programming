#include "main.h"
/**
 * factorial - gives factorial of numbers
 * @n: number to use
 * Return: return factors or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
