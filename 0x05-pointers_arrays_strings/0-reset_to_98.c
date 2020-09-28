#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - Reset the number to 98.
 * @n: the pointer received
 */
void reset_to_98(int *n)
{
int p = *n;
p = 98;
*n = p;
}

