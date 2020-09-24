#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	unsigned long int n = 612852475143, div = 2, maxFact;
	while(n!=0) {
		if(n % div !=0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if(n == 1) {
			printf("%lu\n",maxFact);
			break;
			}
		}
	}
	return 0;
}
