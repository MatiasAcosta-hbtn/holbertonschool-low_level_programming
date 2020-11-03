#include "lists.h"

/**
 * print_listint - print the nodes of a list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while(h)
	{
		printf("%d\n", h->n);
		h = h-> next;
		i++;
	}
	return (i);
}
