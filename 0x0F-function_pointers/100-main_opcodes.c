#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: amount of parameters
 * @argv: parameters
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < (atoi(argv[1]) - 1))
	{
		printf("%02x ", *p);
		i++;
		p++;
	}
	printf("%02x\n", *p);
	return (0);
}
