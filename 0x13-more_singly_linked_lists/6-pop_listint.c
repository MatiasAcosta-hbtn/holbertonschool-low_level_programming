#include "lists.h"

/**
 * pop_listint - deleted the head node of a listint?t
 * @head: the head of the list
 * Return: head node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *deleted, *aux;

	if (*head == NULL)
		return (0);
	deleted = *head;
	*head = deleted->next;
	free(deleted);
	aux = *head;
	return (aux->n);
}
