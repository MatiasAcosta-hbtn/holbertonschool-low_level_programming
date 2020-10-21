#include "calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	char op;

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

}
