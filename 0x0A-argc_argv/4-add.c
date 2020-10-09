#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry 
 * Return - always 0
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, res = 0, flag = 0, test;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] != '\0'; i++)
	{
		test = atoi(argv[i]);
		if(test == 0 && *argv[i] != 48)
		{
			printf("Error\n");
			return (1);	
		}
		else
			res += test;
	}
	printf("%i\n", res);
	return (0);
}
