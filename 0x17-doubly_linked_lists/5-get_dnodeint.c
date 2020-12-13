#include "lists.h"

/**
 * get_dnodeint_at_index - get a node with an index
 * @head: the head of the list
 * @index: the index
 * Return: the address of the node in the index position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *aux;

	aux = head;
	while (aux != NULL && index != 0)
	{
		aux = aux->next;
		index--;
	}
	if (index != 0)
		return (NULL);
	return (aux);
}
