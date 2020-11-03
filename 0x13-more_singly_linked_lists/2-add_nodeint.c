#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n  = n;
	node->next = *head;
	*head = node;
	return (node);
}
