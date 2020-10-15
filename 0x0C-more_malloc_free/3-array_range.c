#include "holberton.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if(min > max)
		return (NULL);
	p = (int *)malloc(sizeof(int) * max);
	
}
