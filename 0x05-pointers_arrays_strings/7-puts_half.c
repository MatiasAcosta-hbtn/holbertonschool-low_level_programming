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
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	
		for (j = j; j < i; j++)
			_putchar(*(str + j));
	}
	_putchar(10);
}
