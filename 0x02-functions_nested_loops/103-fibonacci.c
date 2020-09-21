#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int a = 0, b = 1, c = 0, even;

while (c < 4000000)
{
	c = a + b;
	a = b;
	b = c;
	if (c % 2 == 0)
		even += c;
}
printf("%ld\n", even);
return (0);
}
