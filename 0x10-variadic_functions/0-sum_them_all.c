#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all
 * @n: count of elements
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count = 0;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (count < n)
	{
		sum += va_arg(args, int);
		count++;
	}
	va_end(args);
	return (sum);
}
