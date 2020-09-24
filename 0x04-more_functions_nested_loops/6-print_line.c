#include "holberton.h"
/**
 * print_line - print a line with the long of n
 * @n: the long of the line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
			_putchar('_');
	}
	_putchar(10);
}
