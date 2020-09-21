#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n=n; n <=98; n++)
	{
		printf("%i",n);
		if(n != 98)
			printf(", ");
	}
printf("\n");	
}
