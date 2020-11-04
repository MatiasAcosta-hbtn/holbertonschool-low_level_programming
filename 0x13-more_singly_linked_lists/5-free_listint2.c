#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: a pointer to head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
