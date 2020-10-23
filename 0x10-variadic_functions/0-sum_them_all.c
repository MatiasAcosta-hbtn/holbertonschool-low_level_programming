#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count = 0;
	int sum = 0;

	va_start(args, n);
	while (count < n)
	{
		sum += va_arg(args, int);
		count++;
	}
	va_end(args);
	return (sum);
}
