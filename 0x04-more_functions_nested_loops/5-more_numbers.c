#include "holberton.h"
/**
 * print_most_numbers - print the numbers from 0 to 9 except 2 and 4
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar(10);
	}
}
