#include "lists.h"

/**
 * insert_nodeint_at_index - get a node with the index
 * @head: the head of the list
 * @idx: the index
 * @n: the data of the node
 * Return: the node in the index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *deleted;
	unsigned int pos = 0;

	if (!head)
	{
		return (new);
	}
	aux = *head;
	while (aux && pos < idx)
	{
		aux = aux->next;
		pos++;
	}
	if (pos != idx)
		return (NULL);
	new->next = aux->next;
	aux->next = new;
	return (new);
}
