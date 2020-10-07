#include "holberton.h"
#include <stdio.h>
/**
 * aux - auxiliar function
 * @n: the number
 * @b: the other number
 * Return: the 1 or 0
 */

int aux(int n, int b)
{
	if (n == b)
		return (1);
	if (n % b == 0)
		return (0);
	return (aux(n, b + 1));
}

/**
 * is_prime_number - return 0 or 1 if is a prime number
 * @n: the number
 * Return: 1 or 0 is the number is prime
 */
int is_prime_number(int n)
{
	int b = 2;

	if (n <= 1)
		return (0);
	return (aux(n, b));

}
