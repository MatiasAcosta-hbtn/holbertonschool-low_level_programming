#include "holberton.h"

/**
 * factorial - return the factorial of a num
 * @n: the num
 * Return: the sum factorial of num
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
