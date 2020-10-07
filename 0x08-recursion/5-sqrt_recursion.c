#include "holberton.h"

/**
 * aux - auxiliar function
 * @n: a number
 * @b: an other number
 * Return: t
 */ 
int aux(int n, int b)
{
	if (b * b == n)
		return (b);
	if (b * b > n)
		return (-1);
	return (aux(n, b + 1));
}

/**
 * _sqrt_recursion - the sqrt of a number
 * @n: the number
 * Return: the sqrt of a number
 */
int _sqrt_recursion(int n)
{
	int b = 2;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (n);
	return (aux(n, b + 1));

}
