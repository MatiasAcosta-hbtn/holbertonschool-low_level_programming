#include <stdio.h>

int _atoi(char *s){

int i=0, j, largo, signo = 1, res, k, inicio, fin;

while (*(s + i) != 0){
	if(*(s + i) == '-')
		signo *= -1;
	if(*(s + i) >= '0' && *(s + i) <= '9')
	{
		inicio = i;
		fin = i;
		printf("Numero encontrado Posicion %d\n", i);
		break;
	}
	i++;
}

for(k = inicio; *(s + k) != '\0'; k++)
{
	if (*(s + k) >= '0' && *(s + k) <= '9')
		fin++;
	else
		break;
}


printf("El inicio es:%d\n",inicio);
printf("El fin es:%d\n",fin);
printf("El signo es:%d\n",signo);
return(1);
}
		
int main(void)
{
    int n;

    n = _atoi("402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("++ Sui ---- te ---  402 #cisfun :)");
    printf("%d\n", n);
    n = _atoi("-123");
    printf("%d\n",n);
    return (0);
}
