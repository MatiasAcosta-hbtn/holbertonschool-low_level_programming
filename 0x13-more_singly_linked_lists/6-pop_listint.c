#include "lists.h"

/**
 * pop_listint - deleted the head node of a listint?t
 * @head: the head of the list
 * Return: head node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *deleted;
	int n;

	if (*head == NULL)
		return (0);
	deleted = *head;
	if (deleted->next == NULL)
		return (0);
	n = deleted->next->n;
	*head = deleted->next;
	free(deleted);
	return (n);
}
