#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints a text
 *
 */

void _puts(char *str){

int i=0;

while(*(str + i) != 0){
i++;
}
for(i=i;i>=0;i--){
    _putchar(*(str + i));
}
_putchar(10);
}