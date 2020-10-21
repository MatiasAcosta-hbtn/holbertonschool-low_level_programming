#include "function_pointers.h"

/**
 * int_index - the function that print the index of the array if found 98
 * @array: the array
 * @size: the size of array
 * @cmp: function of compare
 * Return: the index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, comp = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		comp = cmp(array[i]);
		if (comp == 1)
			return (i);
	}
	return (-1);
}
