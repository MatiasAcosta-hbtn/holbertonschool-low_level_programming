#include "lists.h"

/**
 * add_node - add a new node to the list
 * @head: the head of the list
 * @str: the string to add
 * Return: the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	new_list->str = str;
	new_list->len = strlen(str);
	new_list->next = head->next;
	head->next = new_list;
}
