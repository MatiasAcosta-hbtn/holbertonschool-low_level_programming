#include "lists.h"

/**
 * add_dnodeint_end - add a node in the end of the list
 * @head: the head of the list
 * @n: data of list
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
	new->prev = aux;
	return (new);
}
