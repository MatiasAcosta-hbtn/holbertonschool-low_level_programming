#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	if (d->age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
