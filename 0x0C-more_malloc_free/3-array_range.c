#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array from min to max
 * @min: min
 * @max: max of array
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0, aux = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = (int *)malloc(sizeof(int) * (max - min) + 1);
	for (i = min, aux = 0; i <= max; i++, aux++)
	{
		p[aux] = i;
	}
	return (p);
}
