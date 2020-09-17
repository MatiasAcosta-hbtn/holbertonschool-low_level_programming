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
	int j = 0;

	for (i = 48; i <= 57; i++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i == d || i > d)
				{
					continue;
				}
				if (d == j || d > j)
				{
					continue;
				}
				putchar(i);
				putchar(d);
				putchar(j);
				if (d != 56 || i != 55 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
