#include "main.h"
/**
 * helper - help decides right or wrong
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - return square root
 * @n: integer to return
 * Return: return int of square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
