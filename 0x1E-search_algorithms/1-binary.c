#include "search_algos.h"
/**
 * binary_search - This searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to be searched.
 * Return: Return -1 if the value is not present or array is NULL,
 * Otherwise return the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left;
	size_t right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
