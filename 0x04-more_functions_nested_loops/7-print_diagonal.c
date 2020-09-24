#include "holberton.h"
/**
 * print_diagonal - print a diagonal with the long of n
 * @n: the long of the diagonal
 */

void print_diagonal(int n)
{
	int i, j, count = 0;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= count; j++)
				_putchar(' ');
			_putchar(92);
			_putchar(10);
			count++;
		}
	}
	else
		_putchar(10);
}
