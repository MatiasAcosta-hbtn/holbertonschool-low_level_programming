#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	for(i = 0; i <= 9; i++)
		{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		if (i <= 9)
		{
			_putchar('\n');
		}
	}
}
