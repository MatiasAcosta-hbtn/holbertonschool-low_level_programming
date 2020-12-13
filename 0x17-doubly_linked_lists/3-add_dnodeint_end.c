#include "lists.h"

dlistint_t *create_dnode(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

/**
 *
 *
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	aux = *head;
	new = create_dnode(n);
	if (new == NULL)
		return (NULL);
	if (aux == NULL)
	{
		*head = new;
	}
	while (aux->next != NULL)
		aux = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
