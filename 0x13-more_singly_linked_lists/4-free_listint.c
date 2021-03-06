#include "lists.h"

/**
 * free_listint - free a list
 * @head: a pointer to head
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
