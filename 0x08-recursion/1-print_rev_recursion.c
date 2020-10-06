#include "holberton.h"

/**
 * _print_rev_recursion - print a string with recursion
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	int tope, i;
	while(*(s + tope) <= 0)
		tope++;

	if(*(s + tope) == 0)
		{
		_putchar(*(s + tope));
		tope--;
		_print_rev_recursion(s);
		}
}
