#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array from min to max
 * @min: min
 * @max: max of array
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; max >= min; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
