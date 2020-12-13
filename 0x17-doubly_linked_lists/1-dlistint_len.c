#include "lists.h"

/**
 * dlistint_len - return the len of a linked list
 * @h: head of the linked list
 * Return: len of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux;

	if (h == NULL)
		return (0);
	aux = h;
	while (aux->prev != NULL)
		aux = aux->prev;
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
