#include "holberton.h"
/**
 * _atoi - print a number of the string
 * @s: the string received
 * Return: the number
 */

int _atoi(char *s)
{
int len, i = 0, j = 0, largo = 0, signo = 0, res = 0, k = 0;
int  inicio = 0, fin = 0, pow = 0, a = 0;

for (len = 0; s[len] != 0; len++)
{
}

while (*(s + i) != 0)
{
	if (*(s + i) == 45)
		signo++;
	if (*(s + i) >= 48 && *(s + i) <= 57)
	{
		inicio = i;
		fin = i;
		break;
	}
	i++;
}
for (k = inicio; k <= len; k++)
{
	if (*(s + k) >= '0' && *(s + k) <= '9')
		fin++;
	else
		break;
}
largo = fin - inicio;
for (j = 0; j < largo; j++)
{
	pow = 1;
	for (a = j; a < largo - 1; a++)
		pow *= 10;
	res += (s[inicio + j] - 48) * pow;
}
if (signo % 2 == 0)
	return (res);
else
	return (-res);
}
