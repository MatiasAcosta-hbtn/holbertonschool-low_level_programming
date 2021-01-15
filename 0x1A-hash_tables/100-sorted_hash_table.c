#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *shash_table = NULL;
	unsigned long int i;

	if (!size)
		return (NULL);

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
	{
		return (NULL);
	}
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!shash_table->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		shash_table->array[i] = NULL;
	}
	return (shash_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
	shash_node_t *new_node = NULL, *aux = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}