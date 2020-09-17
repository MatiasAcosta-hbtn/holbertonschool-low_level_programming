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
					if (i == d && j == k)
					{
						continue;
					}
					if (i == d && j > k)
					{
						continue;
					}
					if (i > d)
					{
						continue;
					}
					putchar(i);
					putchar(d);
					putchar(32);
					putchar(j);
					putchar(k);
					putchar(44);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
