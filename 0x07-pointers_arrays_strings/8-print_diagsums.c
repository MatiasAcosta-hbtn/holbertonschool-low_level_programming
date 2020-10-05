#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - search a char in an string
 * @s: String
 * @c: char to find
 *
 * Return: the pointer to char or 0 if dont have coincidence
 */

void print_diagsums(int *a, int size)
{

	int i = 0, j = 0, diag_one = 0, diag_two = 0;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if (i == j && i != 0)
			{
				diag_one += *(a + i + j);
				printf("Value diagonal %d\n",*(a + i + j));
			}
		}
		a+=size;
	}
	printf("%i\n",diag_one);
}
