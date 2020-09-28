#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints a middle of text
 * @str: the string received
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (j >= i / 2)
			_putchar(*(str + j));
	}
	_putchar(10);
}
