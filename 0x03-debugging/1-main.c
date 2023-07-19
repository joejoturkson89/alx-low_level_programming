#include <stdio.h>

/**
 * main - causes an infinity loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinity loop incoming :(\n");
	i = 0;

	/*while (i < 10)*/
	/*{*/
	/*      putchar(i);*/
	/*}*/

	printf("Infinity loop avoided! \\o/\n");
	return (0);
}
