#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @argc: count of arguments
 * @argv: arguments passed
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] != '\0'; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		else
			res += atoi(argv[i]);
		}
	}
	printf("%i\n", res);
	return (0);
}
