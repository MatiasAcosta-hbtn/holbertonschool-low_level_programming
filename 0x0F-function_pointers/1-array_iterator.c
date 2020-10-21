#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterate in the array and execute the function action
 * @array: the array
 * @size: the size of the array
 * @action: the function of action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (size == 0)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
