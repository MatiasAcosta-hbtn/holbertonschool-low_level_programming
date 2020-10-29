#include "lists.h"

/**
 * print_list - print a list
 * @h: the list to print
 * Return: idk
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] ", h->len);
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
