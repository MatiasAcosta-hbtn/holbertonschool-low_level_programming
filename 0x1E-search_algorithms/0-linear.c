#include "search_algos.h"

/**
 * linear_search - search an element using linear search algorithm
 * @array: Pointer to the array
 * @size: The size of the array
 * @value: Value to find
 * Return: index of the element or -1 if not founded
 */


int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
