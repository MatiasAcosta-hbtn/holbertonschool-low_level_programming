#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
		{
			for (j = 0; j <= size - 1; j++)
			{
				if((i + j) >= size - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
