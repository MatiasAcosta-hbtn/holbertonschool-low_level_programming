#include "lists.h"

/**
 * add_nodeint_end - add a node in the end
 * @head: a pointer to head
 * @n: the number 
 * Return: Pointer to node with type listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	*head = node;
	return (node);
}
