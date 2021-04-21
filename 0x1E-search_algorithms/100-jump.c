#include "search_algos.h"
#include <math.h>

/**
* jump_search - search a value using jump
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search for
* Return: the index of the value
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size), j = 0;
	char *value_checked = "Value checked array";
	char *value_found = "Value found between indexes ";

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] < value)
		{
			printf("%s[%ld] = [%d]\n", value_checked, i, array[i]);
			continue;
		}
		else
		{
			printf("%s[%ld] and [%ld]\n", value_found, i - jump, i);
			for (j = (i - jump); j <= i; j++)
			{
				printf("%s[%ld] = [%d]\n", value_checked, j, array[j]);
				if (array[j] == value)
					return (j);
				if (array[j] > value)
					return (-1);
			}
		}
	}
	printf("%s[%ld] and [%ld]\n", value_found, i - jump, i);
	for (j = (i - jump); j < size; j++)
	{
		printf("%s[%ld] = [%d]\n", value_checked, j, array[j]);
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			return (-1);
	}
	return (-1);
}
