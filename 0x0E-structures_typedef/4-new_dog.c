#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int size_n, size_own;
	
	size_n = _strlen(name);
	size_own = _strlen(owner);
	my_dog = malloc(sizeof(dog_t));
	if(my_dog == NULL)
		return (NULL);
	my_dog->name = malloc((size_n * sizeof(char) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return(NULL);
	}
	my_dog->owner = malloc((size_own * sizeof(char) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return(NULL);
	}
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcpy(my_dog->owner, owner);
	return (my_dog);
}

/**
 * _strlen - count the leng of s
 * @s: pointer received
 * Return: the lenght of the character received
 */

int _strlen(char *s)
{

int i = 0;

while (*(s + i) != 0)
	i++;
return (i);
}

/**
 * _strcpy - copy a pointer includin the '\0'
 * @dest: the destination
 * @src: from this src
 * Return: the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (start);
}
