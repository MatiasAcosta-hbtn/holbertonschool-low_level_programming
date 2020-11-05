#include "holberton.h"
/**
 * get_endianness - function que te dice que endianess es
 * Return: 1 if small or 0 if big
 */

int get_endianness(void)
{
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
