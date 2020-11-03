#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *aux;
	int sum = 0;

	if (!head)
		return (NULL);
	aux = head;
	while(aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
