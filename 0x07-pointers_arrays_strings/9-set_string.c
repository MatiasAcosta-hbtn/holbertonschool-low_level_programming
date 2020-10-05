#include "holberton.h"
#include <stdio.h>

/**
 * set_string - set pointers
 * @s: pointer to pointer
 * @to: pointer
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
