#include "3-calc.h"
/**
 * op_add - calculates the sum of integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of integers
 * @a: first integer to be calculated
 * @b: second integer to b calculated
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 * Return: the result of the division of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of integers after division
 * @a: first integer to be calculated
 * @b: second inyeger to be calculated
 * Return: remainder after dividing a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
