#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count = 0;
unsigned long int a = 0, b = 1, c = 0;

for (count=0; count <= 98; count++)
{
	c = a + b;
	a = b;
	b = c;
	printf("%ld, ", c);

}
return (0);
}
