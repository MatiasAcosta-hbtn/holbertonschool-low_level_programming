#include "lists.h"

/**
 * add_nodeint - add a node in the head
 * @head: pointer to head
 * @n: the parameter n
 * Return: pointer to node added
 */

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
