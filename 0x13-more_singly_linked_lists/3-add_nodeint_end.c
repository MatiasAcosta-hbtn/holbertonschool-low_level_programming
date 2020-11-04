#include "lists.h"
/**
 * add_nodeint_end - add a node in the end
 * @head: a pointer to head
 * @n: the number
 * Return: Pointer to node with type listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *aux;

	aux = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = node;
	return (node);
}
