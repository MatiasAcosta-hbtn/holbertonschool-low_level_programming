#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
