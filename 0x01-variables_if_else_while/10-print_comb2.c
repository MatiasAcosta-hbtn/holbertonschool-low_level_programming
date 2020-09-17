#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numbers[] = "0123456789";
	int i = 0;
	int d = 0;

	for(i=0; i<10; i++)
	{
		for(d=0;d<10;d++)
		{
			
			putchar(numbers[i]);
			putchar(numbers[d]);
			if(d !=9 || i != 9)
			{
				putchar(' ');
				putchar(',');
			}
		}
		
			
	}
	putchar('\n');
	return (0);
}
