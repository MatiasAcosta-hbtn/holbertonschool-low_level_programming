#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the space of a dog structure
 * @d: the dog
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);

}
