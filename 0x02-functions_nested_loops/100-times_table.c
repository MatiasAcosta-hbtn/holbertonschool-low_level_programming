#include "holberton.h"

/**
 * print_times_table - print the tables
 * @n: the number received
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j, sig, res;

n += 48;
if (n > 48 && n <= 63)
{
	for (i = 48; i <= n; i++)
	{
		for (j = 48; j <= n; j++)
		{
			res = (i - 48) * (j - 48);
			sig = (i - 48) * ((j + 1) - 48);
			if (res > 99)
			{
				_putchar((res / 100) + 48);
				_putchar(((res / 10) % 10) + 48);
				 _putchar((res % 10) + 48);
			}
			else if (res > 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			else
				_putchar(res + 48);
			if (j != n)
				_putchar(',');
			if (res <= 9 && sig <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			} else if (res <= 99 && sig <= 99)
				_putchar(' ');
			_putchar(' ');
	}
	_putchar(10);
}
}
}
