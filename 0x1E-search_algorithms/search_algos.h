#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_aux(int *array, int value, int start, int end, int size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int int_search_aux(int *array, int start, int end, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_aux(int *array, int value, int start, int end);
int exponential_search(int *array, size_t size, int value);

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif
