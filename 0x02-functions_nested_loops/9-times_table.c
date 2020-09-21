#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j, res;

for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		res = (i - 48) * (j - 48);
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
			_putchar(' ');
		}
	}
	_putchar(10);
}
}
