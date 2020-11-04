#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *next, *previous;

	aux = *head;
	while (aux != NULL)
	{
		next = aux->next;
		aux->next = previous;
		previous = aux;
		aux = next;
	}
	return ((*head));
}
