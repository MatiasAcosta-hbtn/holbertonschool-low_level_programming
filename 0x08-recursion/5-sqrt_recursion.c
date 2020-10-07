#include "holberton.h"

/**
 * aux - auxiliar function                                                                                                                                             * @n: the number
 * @b: the other number                                                                                                                                                * Return: the 1 or 0                                                                                                                                                  */
int aux(int n, int b)
{
	if (b * b == n)
		return(b);
	if(b * b >= n)
		return(-1);
	return (aux(n,b + 1);

}

int _sqrt_recursion(int n)
{

	int b = 2;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (n);
	return (aux(n,b + 1));

}
