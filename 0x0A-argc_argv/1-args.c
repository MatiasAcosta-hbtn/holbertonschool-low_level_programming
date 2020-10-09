#include <stdio.h>

/**
 * main - Entry
 * @argc: counts of arguments
 * @argv: arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", (argc - 1));
	return (0);
}
