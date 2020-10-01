#include "holberton.h"
/**
 * rot13 - changes the letter
 * @s: the string to change
 * Return: a char pointer
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char root13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == letras[j])
			{
				*(s + i) = root13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
