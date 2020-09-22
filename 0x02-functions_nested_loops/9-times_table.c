#include "holberton.h"
/**
 * times_table - Show the tables
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j, res, sig;

for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		res = (i - 48) * (j - 48);
		sig = (i - 48) * ((j + 1) - 48);
		if (res > 9)
		{
			_putchar((res / 10) + 48);
			_putchar((res % 10) + 48);
		}
		else
			_putchar(res + 48);
		if (j != 57)
		{
			_putchar(',');
			if (res <= 9 && sig <= 9 && sig + 48 <= 57)
				_putchar(' ');
			_putchar(' ');
			}
		}
	_putchar(10);
}
}

