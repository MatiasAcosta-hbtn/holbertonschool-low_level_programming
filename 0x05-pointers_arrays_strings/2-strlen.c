#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *s){

char arr = *s;
int i, count;

for(i=0; i <= sizeof(arr)/sizeof(arr); i++){
    count +=1;
}
return (count);
}