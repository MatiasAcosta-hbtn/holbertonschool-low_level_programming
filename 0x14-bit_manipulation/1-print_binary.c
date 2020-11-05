#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - print a number in binary
 * @n: the number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int flag = 0;

	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1)
		printf("1");
	else
	{
		print_binary(n >> 1);
		printf("%lu", n & 1);
	}
}
