#include "search_algos.h"
/**
 * linear_search - This searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: A pointer to the 1st element of the array to search.
 * @size: The number of elements in the array.
 * @value: the value to search for.
 * Return: Return  -1 if the value is not present or the array is NULL,
 * Otherwise, return the first index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
