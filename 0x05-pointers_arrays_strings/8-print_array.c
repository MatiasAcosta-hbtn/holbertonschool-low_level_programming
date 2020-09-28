#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: the array
 * @n: the lenght of the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
