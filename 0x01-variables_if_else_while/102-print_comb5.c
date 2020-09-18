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
	int k = 0;

	for (i = 48; i <= 57; i++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (i < j || (i == j && d < k))
					{
					putchar(i);
					putchar(d);
					putchar(32);
					putchar(j);
					putchar(k);
					if (i != 57 || d != 56 || j != 57 || k != 57)
					{
					putchar(44);
					putchar(32);
					
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
