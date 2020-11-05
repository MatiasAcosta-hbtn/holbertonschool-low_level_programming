#include "holberton.h"
/**
 * get_bit - print a number in binary
 * @n: the number
 * @index: the index
 * Return: Num
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index == 0)
		return (n & 1);
	if (index == 0)
		return (n & 1);
	if (n == 0)
		return (-1);
	m = get_bit(n >> 1, index - 1);
	return (m);
}
