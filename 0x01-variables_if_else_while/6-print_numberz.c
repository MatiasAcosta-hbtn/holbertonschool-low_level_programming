#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numbers[] = "0123456789";
	unsigned int i = 0;

	while (i < 10)
	{
		putchar(numbers[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
