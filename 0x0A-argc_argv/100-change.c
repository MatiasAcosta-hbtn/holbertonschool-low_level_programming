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
	int total = 0, monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (total >= 25)
	{
		total -= 25;
		monedas++;
	}
	while (total >= 10)
	{
		total -= 10;
		monedas++;
	}
	while (total >= 5)
	{
		total -= 5;
		monedas++;
	}
	while (total >= 2)
	{
		total -= 2;
		monedas++;
	}
	if (total == 1)
		monedas++;
	printf("%d\n", monedas);
	return (0);
}
