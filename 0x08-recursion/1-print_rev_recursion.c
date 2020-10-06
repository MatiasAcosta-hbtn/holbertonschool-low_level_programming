#include "holberton.h"

/**
 * _print_rev_recursion - print a string with recursion
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	int i;
	while(*s)
		s++;

	_putchar(*s);
	if (*s == 0)
		putchar(10);
	else
		_puts_recursion(s + 1);
}
