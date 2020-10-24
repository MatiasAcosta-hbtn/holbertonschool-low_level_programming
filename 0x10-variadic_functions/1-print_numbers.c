#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the separator of the numbers
 * @n: the count of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args;

	va_start(args, n);
	while (count < n - 1)
	{
		if (separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
		count++;
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
