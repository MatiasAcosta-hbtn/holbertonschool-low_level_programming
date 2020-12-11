#include "lists.h"

/**
 *
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux;

	aux = h;
	if (h == NULL)
		return (0);
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		count++;
	}
	return (count);
}
