#include "holberton.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k = 0;

	for(i = 0; i < size; i++)
	{
		if(i % 10 == 0 || i == 0)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10 && *(b + j) != 0; j++)
			{
				while(j % 2 == 0)
				{
					printf("%02x%02x ",*(b + j), *(b + j + 1));
					j++;
				}
			}
			for (j = i; j < i + 10 && *(b + j) != 0; j++)
                        {
				printf("%c",*(b + j));       
                        }
			putchar(10);
		}
	}
}
