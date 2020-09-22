#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
		{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		i++;
		if (i <= 9)
		{
			_putchar('\n');
		}
	}
	_putchar(10);
	_putchar('c');
}
