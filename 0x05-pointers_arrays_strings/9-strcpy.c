#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: the array
 * @n: the lenght of the array
 */

char *_strcpy(char *dest, char *src)
{
	int i=0, n=0;

	while(*(src + i) != 0)
		i++;
	printf("%d\n",i);
	for (n=0; n < i; n++)
	{
		*(dest + n) = *(src + n);
	}
	return((char)*dest);
}
