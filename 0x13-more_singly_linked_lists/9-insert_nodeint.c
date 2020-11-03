#include "lists.h"

listint_t *add_nodeint(listint_t *head, const int n, listint_t *point)
{
        listint_t *node;

        if (!head)
                return (NULL);
        node = malloc(sizeof(listint_t));
        if (node == NULL)
                return (NULL);
        node->next = point;
        return (node);
}
~                         

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux, *node;

	aux = *head;
	if(!*head)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		if (!aux)
			return (NULL);
		aux = aux->next
	}
	node = add_nodeint(aux, n, aux->next);
	if (!node)
		return (NULL);
	return (node);
}
