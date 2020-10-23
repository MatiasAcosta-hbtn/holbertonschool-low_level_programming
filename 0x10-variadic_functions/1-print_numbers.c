#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args;

	if (separator == NULL)
		separator = "";
	if (n < 0)
		return;
	va_start(args, n);
	while (count < n - 1)
	{
		printf("%d%s", va_arg(args, int), separator);
		count++;
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
