#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the head of the list
 * Return: pointer to a new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return ((*head));
}
