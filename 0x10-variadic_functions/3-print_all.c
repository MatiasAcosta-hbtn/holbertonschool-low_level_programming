#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list args;
	op_t optiones[] = {
	{'c', print_char},
	{'i', print_integer},
	{'f', print_float},
	{'s', print_string},
	{NULL,NULL}
	}
	
	va_start(args, format);
	while(format[i] != 0 && !format)
	{
		while(options[j] != NULL)
		{
			if(format[i] == options[j].c)
			{
				options[j].fun(s, args);
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

void print_char(char *str, va_list args)
{
	printf("%s%c", str,
}
