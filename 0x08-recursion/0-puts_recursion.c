#include "holberton.h"

/**
 * _puts_recursion - print a string with recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == 0)
		_putchar(10);
	else
		_puts_recursion(s + 1);
}
