#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: head of the list
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
