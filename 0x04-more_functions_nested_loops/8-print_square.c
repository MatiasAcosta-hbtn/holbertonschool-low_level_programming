#include "holberton.h"
/**
 * print_square - print an square with the size of received
 * @size: the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
		{
			for (j = 0; j <= size - 1; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
