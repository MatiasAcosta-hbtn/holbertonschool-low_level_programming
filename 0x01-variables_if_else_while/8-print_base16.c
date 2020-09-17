#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexa[]="123456789abcdef";
	unsigned int i = 0;

	while (i <=16)
	{
		putchar(hexa[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
