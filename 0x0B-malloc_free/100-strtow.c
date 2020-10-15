#include "holberton.h"
#include <stdlib.h>
/**
 * strtow -
 * @str:
 * Return:
	 */

char **strtow(char *str){

char **p;
int cont = 0;

if(str == NULL || str[0] == 0)
	return NULL;
while(str[cont])
	cont++;
p = (char **)malloc(sizeof(char) * cont);
if (p == NULL)
	return(NULL);
return(p);
}
