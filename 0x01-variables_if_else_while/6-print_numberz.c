#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numbers[] = "0123456789\n";
	unsigned int i = 0;

	while (i < 11)
	{
		putchar(numbers[i]);
		i++;
	}
	return (0);
}
