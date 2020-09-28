#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints a text
 * @str: the string received
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
