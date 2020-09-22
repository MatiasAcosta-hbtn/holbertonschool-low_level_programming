#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers to 98
 * @n: the number received
 * Return: don't return
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		printf("%i", n);
		if (n != 98)
			printf(", ");
	}
printf("\n");
}
