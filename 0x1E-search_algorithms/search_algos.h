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
#endif
