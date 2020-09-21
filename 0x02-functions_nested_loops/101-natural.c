#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, i;

for (i = 0; i < 1024; i++)
{
	if ((i % 3 == 0) || (i % 5 == 0))
		n = n + i;

}
printf("%i\n", n);
return (0);
}
