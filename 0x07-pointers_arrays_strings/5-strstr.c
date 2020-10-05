#include "holberton.h"
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

	while (*(haystack + i) != 0)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; *(haystack + j) != '\0' && *(haystack + i +j) != '\0'; j++)
			{
				if (*(haystack + i + j) != *(needle + j))
					break;
			}
		if (*(needle + j + 1) == '\0')
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
