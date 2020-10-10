#include <stdio.h>
#include <stdlib.h>

/**
 * contar_monedas - count the cantidad of monedas dependig of the total
 * @total: the total
 * Return: the count of monedas
 */

int contar_monedas(int total)
{
	int monedas = 0;

	while (total > 25)
	{
		total -= 25;
		monedas++;
	}
	while (total > 10)
	{
		total -= 10;
		monedas++;
	}
	while (total > 5)
	{
		total -= 5;
		monedas++;
	}
	while (total > 2)
	{
		total = total - 2;
		monedas++;
	}
	while (total >= 1)
	{
		total -= 1;
		monedas++;
	}
return (monedas);
}

/**
 * main - Entry
 * @argc: count of arguments
 * @argv: arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0, total = 0, monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] != 0; i++)
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	monedas = contar_monedas(total);
	printf("%d\n", monedas);
	return (0);
}
