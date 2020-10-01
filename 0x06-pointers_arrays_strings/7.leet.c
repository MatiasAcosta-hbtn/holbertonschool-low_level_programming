#include "holberton.h"
/**
 * _strcat - function that append the contain in src in the buffer of dest
 * @dest: the destination to append
 * @src: the text to copy
 * Return: a char pointer
 */

char *leet(char *s)
{
	int i = 0;
	while (*(s + i) != 0)
	{
		if(*(s + i) == 'a' || *(s + i) == 'A')
			*(s + i) = '4';
		if(*(s + i) == 'e' || *(s + i) == 'E')
			*(s + i) = '3';
		if(*(s + i) == 'o' || *(s + i) == 'A')
			*(s + i) = '4';
		i++;
	}
	return (dest);
}
