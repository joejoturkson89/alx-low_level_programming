#include "main.h"
/**
 * length - finds lenght of string
 * @s: string
 * Return: return length of string
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helper2 - helps find integer
 * @i: integer
 * @s: string
 * Return: int value
 */
int helper2(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helper2(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it paldindrome
 * @s: string to be  checked
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));

}
