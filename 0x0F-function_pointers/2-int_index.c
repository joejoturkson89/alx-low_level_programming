#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for integers
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to the comparing function
 * Return: return the index of the first element for which
 * the cmp function doesnt return 0 or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}

	return (-1);
}
