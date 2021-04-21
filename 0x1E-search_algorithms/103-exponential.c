#include "search_algos.h"

/**
 * exponential_search - search an element using exponential algorithm
 * @array: the array
 * @size: the size of the array
 * @value: value to find
 * Return: the index where the value is found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	for (; i < size && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	if (i >= size)
		return (advanced_binary_aux(array, value, i / 2, size - 1));
	return (advanced_binary_aux(array, value, i / 2, i));
}

/**
 * advanced_binary_aux - searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: array to search.
 * @value: value to search into array.
 * @start: start of array or subarray
 * @end: end of array or subarray
 * Return: first index when value is located in array otherwise return -1.
 */

int advanced_binary_aux(int *array, int value, int start, int end)
{
	int mid = 0, i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		printf(i == end ? "\n" : ", ");
	}
	if (end < start)
		return (-1);

	mid = start + (end - start) / 2;

	if (array[mid] == value && (mid == start || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_aux(array, value, start, mid));
	if (array[mid] < value)
		return (advanced_binary_aux(array, value, mid + 1, end));
	return (-1);
}
