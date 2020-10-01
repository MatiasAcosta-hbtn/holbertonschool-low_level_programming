#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the lenght of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, tin, tfin;

	for (i = n - 1; i >= 0; i--)
	{
		tfin = *(a + i);
		tin = *(a + j);
		if (j < i)
		{
			*(a + i) = tin;
			*(a + j) = tfin;
		}
		else
			break;
		j++;
	}
}
