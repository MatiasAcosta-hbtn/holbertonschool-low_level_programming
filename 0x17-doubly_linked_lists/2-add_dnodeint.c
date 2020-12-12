#include "lists.h"

dlistint_t *create_dnode(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL)
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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	aux = *head;
	if (aux == NULL)
		return (NULL);
	new = create_node(n);
	if (new == NULL)
		return (NULL);
	while (aux->prev != NULL)
		aux = aux->prev;
	new->next = *head;
	*head = new;
}
