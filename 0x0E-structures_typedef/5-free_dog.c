void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->age);
	free(d->name);
	free(d);

}
