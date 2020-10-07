#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - a pow function with recursion
 * @x: the number
 * @y: the exponent
 * Return: the pow of a number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
