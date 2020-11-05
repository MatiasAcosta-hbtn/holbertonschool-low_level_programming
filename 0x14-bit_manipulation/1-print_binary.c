#include "holberton.h"
#include <stdio.h>
void print_binary(unsigned long int n)
{
	unsigned long int last;

	while(n > 1)
	{
		printf("%lu\n",n);
		last = n;
		n = n >> 1;
	}
}
