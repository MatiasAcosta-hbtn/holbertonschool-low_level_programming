#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j, res;

if (n > 0 && n <= 15){

	for (i = 48; i <= n + 48; i++)
	{
		for (j = 48; j <= n + 48; j++)
		{
			res = (i - 48) * (j - 48);
			if (res > 99)
			{	
				/*_putchar((res/100) + 48);
				_putchar(((res /100) % 10) + 48);
				 _putchar((res % 10) + 48);*/
				printf("%d%d%d\n ", (res/100),(res %100) /10, res % 10);
			}
			if (res > 9)
			{
		
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			else
				_putchar(res + 48);
				_putchar(44);
				_putchar(32);
			
	}
	_putchar(10);
}
}
}
