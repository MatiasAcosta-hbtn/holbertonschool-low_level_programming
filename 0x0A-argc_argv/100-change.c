#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @argc: count of arguments
 * @argv: arguments passed
 * Return: always 0
 */


int contar_monedas(int total);

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
		return(0);
	}
	monedas = contar_monedas(total);
	printf("%d\n", monedas);
}

int contar_monedas(int total)
{
	int monedas = 0;

	while (total > 0)
	{
		monedas++;
		if (total >= 25)
		{
			total -= 25;
			continue;	
		}
		if (total >= 10)
		{
			total -= 10;
			continue;
		}
		if (total >= 5)
		{
			total -= 5;
			continue;
		}
		if (total >= 2)
		{
			total -= 2;
			continue;
		}
		if (total == 1)
			total--;
	}
	return (monedas);
}
