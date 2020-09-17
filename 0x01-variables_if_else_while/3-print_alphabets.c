#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	unsigned int i = 0;

	while (i < strlen(alphabet))
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
