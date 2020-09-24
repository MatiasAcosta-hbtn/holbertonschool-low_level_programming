#include "holberton.h"
#include <stdio.h>

/**
 * print_number - print number like printf
 * @n: number
 */

void print_number(int n)
{
	int cont = 1, i, pow, dig, a;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	dig = n;
	while (dig / 10 != 0)
	{
		dig /= 10;
		cont++;
	}
	for (i = cont; i > 0; i--)
	{
		pow = 1;
		for (a = 0; a < (i - 1); a++)
			pow *= 10;
		_putchar('0' + (n / pow) % 10);
	}
}
