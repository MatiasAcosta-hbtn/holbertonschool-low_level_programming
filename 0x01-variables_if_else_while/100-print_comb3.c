#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int d = 0;

	for (i = 48; i <= 57; i++)
	{
		for (d = 48; d <= 57; d++)
		{
			if (i == d || i > d)
			{
				continue;
			}
			putchar(i);
			putchar(d);
			if (d != 57 || i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
