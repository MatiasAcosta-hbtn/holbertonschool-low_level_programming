#include "holberton.h"
/**
 * cap_string - capitalize an string
 * @s: the string received
 * Return:  the string capitalizado
 *
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	int puntos [] = {44, 59, 46, 9, 10, 32, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 12; j++)
		{
			if (*(s + i) == puntos[j])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				{
					*(s + i + 1) -= 32;
					break;
				}
				else
					continue;
			}
		}
		i++;
	}
	return (s);
}
