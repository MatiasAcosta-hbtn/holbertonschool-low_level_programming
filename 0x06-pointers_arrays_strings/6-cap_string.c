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
	int puntos[] = {33, 46, 59, 63, 123, 125, 40, 41, 44, 34, 10, 32, 11};

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 12; j++)
		{
			if (*(s + i) == puntos[j])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
					*(s + i + 1) -= 32;
				else
					continue;
			}
		}
		i++;
	}
	return (s);
}
