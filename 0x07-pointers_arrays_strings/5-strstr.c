#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - return the coincidence with the other word
 * @haystack: String
 * @needle: word to find
 *
 * Return: the pointer to hay or null
 */

char *_strstr(char *haystack, char *needle)
{
	 int i = 0, j = 0;

	while (*haystack != 0 && *haystack)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; *(haystack + j) != '\0' && *(haystack + i + j) != '\0'; j++)
			{
				if (*(haystack + i + j) != *(needle + j))
					break;
			}
		if (*(needle + j) == '\0')
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
