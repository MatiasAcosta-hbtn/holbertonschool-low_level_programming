#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if(n >= 0)
		n = (n % 10) + 48;
	else
	{
		n = n * (-1);
		n = (n % 10) + 48;
	}
	_putchar(n);
	return (0);
}
