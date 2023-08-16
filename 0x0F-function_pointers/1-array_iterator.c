#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - calls a function that acts on array elements
 * @array: name of array on which the function acts
 * @size: size of array to function
 * @action: the function that acts on the array elements
 * Return: no return because of VOID declaration
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
