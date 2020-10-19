#ifndef DOG
#define DOG
/**
 * struct dog - the dog structure
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of the dog
 *
 * Description: Longer desc
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


