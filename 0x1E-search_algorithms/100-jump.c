#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search an element using jump search algorithm
 * @array: the array used to find the element
 * @size: the size of the array
 * @value: the value to find
 * Return: the index where find the elemnt or -1 if not finded
 */


int jump_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);
    
    return jump_search_aux(array, size )
}


/**
 * jump_search_aux - search an element using jump search algorithm
 * @array: the array used to find the element
 * @size: the size of the array
 * @start: start of the array or subarray
 * @end: the end of array or subarray
 * @value: the value to find
 * Return: the index where find the elemnt or -1 if not finded
 */



int jump_search_aux(int *array, size_t size, , int start, int end, int value)
{

}