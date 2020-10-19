#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog = {name, age, owner};
	dog_t *my_dog = &new_dog;
	return (my_dog);
}
