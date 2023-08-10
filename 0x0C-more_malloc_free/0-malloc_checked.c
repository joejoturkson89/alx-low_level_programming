#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: integer to be checked
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
