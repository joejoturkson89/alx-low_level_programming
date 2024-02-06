#include "search_algos.h"
/**
 * advance_binary_recursive - This searches recursively for a value in a
 * sorted rray of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the array to search.
 * @right: the ending index of the array to search.
 * @value: The value to be searched.
 * Return: Return -1 if the value is not present or array is NULL,
 * Otherwise return the index where the value is located.
 */

int advance_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advance_binary_recursive(array, left, i, value));
	return (advance_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - This searches for a value in a sorted array
 * of integers using advance binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The elements in the array.
 * @value: the value to search for.
 * Return: Return -1 if the value is not present or array is NULL,
 * Otherwise return the index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advance_binary_recursive(array, 0, size - 1, value));
}
