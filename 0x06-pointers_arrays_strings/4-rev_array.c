#include "holberton.h"

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, tin, tan;
	for (i = n - 1; i >= 0; i--)
	{
		tan = a[j];
		a[i] = tan;
		a[j] = tin;
		j++;
	}
} 
