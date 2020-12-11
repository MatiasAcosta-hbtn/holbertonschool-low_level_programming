#include "lists.h"

/**
 *
 *
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux;

	if (h == NULL)
		return (0);
	aux = h;
	while(aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
