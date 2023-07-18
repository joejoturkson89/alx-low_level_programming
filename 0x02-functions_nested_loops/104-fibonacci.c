#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long counter = 2;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (counter < 98)
	{
		counter++;
		printf("%lu", c);

		a = b;
		b = c;
		c = a + b;

		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
