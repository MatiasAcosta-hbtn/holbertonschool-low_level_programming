#include "search_algos.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node;
    int pos = 0;

    if (list == NULL)
        return (NULL);


	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
    return (NULL);

}
