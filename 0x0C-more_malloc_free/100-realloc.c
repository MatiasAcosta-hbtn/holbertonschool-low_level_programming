#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;
	
	if (new_size == old_size)
		return(ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL); 
		return(p);	
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if(p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = ((char *)ptr)[i];
	}
	return(p);

}
