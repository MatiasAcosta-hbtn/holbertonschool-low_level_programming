#include "lists.h"

/**
 * sum_dlistint - sum all nums in the list
 * @head: the head of the list
 * Return: the sum of the values in the list or 0 if is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
