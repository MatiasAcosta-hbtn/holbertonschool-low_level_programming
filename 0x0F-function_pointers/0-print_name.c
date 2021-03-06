#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function thar print the name passed in parameters
 * @name: the name to print
 * @f: the function that prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	if (f == 0)
		return;
	f(name);
}
