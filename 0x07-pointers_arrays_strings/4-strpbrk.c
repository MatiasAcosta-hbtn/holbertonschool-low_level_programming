#include "holberton.h"
/**
 * _strpbrk - return the segment when encuentra one coincidence
 * @s: String
 * @accept: chars to accept
 *
 * Return: the pointer to segment
 */

char *_strpbrk(char *s, char *accept)
{
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
		if (flag == 0)
		{
			s++;
		}
		else
			return (s);
	}
	return (0);
}
