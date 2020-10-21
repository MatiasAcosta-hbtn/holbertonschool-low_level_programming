#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function thar print the name passed in parameters
 * @name: the name to print
 * @f: the function that prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (name[0] == 0)
		return;
	f(name);
}
