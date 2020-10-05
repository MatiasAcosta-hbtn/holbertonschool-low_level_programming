#include "holberton.h"

/**
 * _strchr - search a char in an string
 * @s: String
 * @c: char to find
 *
 * Return: the pointer to char or 0 if dont have coincidence
 */

void print_chessboard(char (*a)[8])
{

	int i = 0, j = 0;

	for(i = 0; != 0; i++)
	{
		for(j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
