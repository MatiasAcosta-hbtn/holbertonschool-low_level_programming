#include "holberton.h"
/**
 * rev_string - return the reverse of the string
 * @s: the string received
 */

void rev_string(char *s)
{
int i = 0, j=0;
char tfin, tin;

while (*(s + i) != 0)
i++;
for (i = i - 1; i >= 0; i--)
{
tfin = *(s + i);
tin = *(s + j);
if (j >= i)
break;
else
{
*(s + i) = tin;
*(s + j) = tfin;
}
j++;
}
}
