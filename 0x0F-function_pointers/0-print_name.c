#include "function_pointers.h"

/**
 * print_name - function thar print the name passed in parameters
 * @name: the name to print
 * @f: the function that prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	if (name[0] == 0)
		return;
	f(name);
}
