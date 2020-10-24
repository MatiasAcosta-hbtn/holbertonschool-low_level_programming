#include "variadic_functions.h"

/**
 * print_strings - print stringss
 * @separator: separator of strings
 * @n: num of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *s;
	va_list args;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (count < n - 1)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", s, separator);
		count++;
	}
	s = va_arg(args, char *);
	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(args);
}
