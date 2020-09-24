#include "holberton.h"

/**
 * pot - pow of the num
 * @num: number of pow
 * @potencia: pow of num
 * Return: the pow
 */

int pot(int num, int potencia)
{
	int i, j = 1;

	for (i = 0; i < (potencia - 1); i++)
		j *= num;
	return (j);
}

/**
 * print_number - print number like printf
 * @n: number
 */

void print_number(int n)
{
	int cont = 1, i, dig = n, a, b = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (dig / 10 != 0)
	{
		dig /= 10;
		cont++;
	}
	for (i = cont; i > 0; i--)
	{
		a = pot(10,i);
		_putchar('0' + (n / a) % 10);
	}
}
