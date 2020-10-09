#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int total = 0, monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if(total == 0 && *argv[1] != 48)
	{
		printf("Error\n");
		return(1);
	}
	else
	{
		while (total > 25)
		{
			total -=25;
			monedas++;
		}
		while(total > 10)
		{
			total -= 10;
			monedas++;
		}
		while (total > 5)
		{
			total -=5;
			monedas++;
		}
		while (total > 2)
		{
			total = total - 2;
			monedas++;
		}
		while(total >= 1)
		{
			total -= 1;
			monedas++;
		}
	

	}
	printf("%d\n", monedas);
	return(0);
}
