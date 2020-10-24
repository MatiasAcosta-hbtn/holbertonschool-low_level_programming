#include "variadic_functions.h"
/**
 * print_char - print char
 * @str: string pointer
 * @args: argumetns list
 */
void print_char(char *str, va_list args)
{
	printf("%s%c", str, va_arg(args, int));
}
/**
 * print_integer - print int
 * @str: string pointer
 * @args: argumentList
 */
void print_integer(char *str, va_list args)
{
	printf("%s%d", str, va_arg(args, int));
}

/**
 * print_float - print float
 * @str: string pointer
 * @args: arguments list
 */
void print_float(char *str, va_list args)
{
	printf("%s%f", str, va_arg(args, double));
}
/**
 * print_string - print string
 * @str: string pointer
 * @args: arguments list
 */
void print_string(char *str, va_list args)
{
	char *strings = va_arg(args, char*);

	if (!*strings)
		strings = "(nil)";
	printf("%s%s", str, strings);
}
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */




void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list args;
	op_t options[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	va_start(args, format);
	while (format[i] != 0 && format != NULL)
	{
		while (options[j].c != NULL)
		{
			if (format[i] == options[j].c[0])
			{
				options[j].func(s, args);
				s = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
