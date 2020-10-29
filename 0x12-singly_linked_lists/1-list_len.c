#include "lists.h"

/**
 * list_len - return the number of elements in a list
 * @h: the list
 * Return: the elements of the list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
