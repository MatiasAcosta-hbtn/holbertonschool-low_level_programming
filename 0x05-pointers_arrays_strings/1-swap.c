#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap the numbers from a to b
 * @a: pointer received
 * @b: pointer received
 */
void swap_int(int *a, int *b)
{
int swap_b = *a;

*a = *b;
*b = swap_b;
}

