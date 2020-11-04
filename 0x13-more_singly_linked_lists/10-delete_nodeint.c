#include "lists.h"

/**
 * get_nodeint_at_index - get a node with the index
 * @head: the head of the list
 * @index: the index
 * Return: the node in the index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	unsigned int pos = 0;

	if (!head)
		return (NULL);
	aux = head;
	while (aux && pos < index)
	{
		aux = aux->next;
		pos++;
	}
	if (pos != index)
		return (NULL);
	else
		return (aux);
}
