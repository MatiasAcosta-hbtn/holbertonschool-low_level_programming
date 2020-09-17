#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
