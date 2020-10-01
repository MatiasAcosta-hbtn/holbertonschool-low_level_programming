#include "holberton.h"

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char puntos[] = ",;.!?\"(){}";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 9; j++)
		{
			if(*(s + i) == *(s +j))
				*(s + i + 2) -= 32;
		}		
	}

}
