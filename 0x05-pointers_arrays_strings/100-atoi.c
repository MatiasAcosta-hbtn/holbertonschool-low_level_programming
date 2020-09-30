#include <stdio.h>

int _atoi(char *s){

int i=0, j, largo, signo = 1, res, k, inicio, fin, pow, a = 0;

while (*(s + i) != 0){
	if(*(s + i) == '-')
		signo *= -1;
	if(*(s + i) >= '0' && *(s + i) <= '9')
	{
		inicio = i;
		fin = i;
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

largo = fin - inicio;

for (j = largo; j > 0; j--){
	pow = 1;
    for (a = 0; a < (j - 1); a++)
            pow *= 10;
	res += (s[fin - j] - 48) * pow; 
}

return(res * signo);
}
