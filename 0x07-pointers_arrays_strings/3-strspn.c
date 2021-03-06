#include "holberton.h"
/**
 * _strspn - return the initial segment of bytes that contain accept
 * @s: String
 * @accept: chars to accept
 *
 * Return: the sum of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int i, flag = 0;

	while (*s != 0)
	{
		flag = 0;
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*s == *(accept + i))
			{
				flag = 1;
				break;
			}
		}
		if (flag != 0)
		{
			cont++;
			s++;
		}
		else
			break;
	}
	return (cont);
}
