#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - alloc an space for an array
 * @b: size of b
 * Return: the pointer to the array
 */

void *malloc_checked(unsigned int b)
{

void *p;

p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
