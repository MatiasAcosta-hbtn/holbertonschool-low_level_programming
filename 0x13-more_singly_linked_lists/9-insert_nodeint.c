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
	listint_t *aux, *new;
	unsigned int pos = 0;

	if (!(*head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (*head && idx)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);
	new->n = n;
	aux = *head;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
