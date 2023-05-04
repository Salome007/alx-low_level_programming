#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
  * _get_len - return the length of the input
  * @str: pointer to char
  * Return: int
  */


int _get_len(const char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _get_len(str + 1));
}


/**
  * add_node_end - add a new node at the end of a list_t list.
  * @head: pointer to the first element the list
  * @str: name of the value to add
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _get_len(str);
	new_node->next = NULL;

	if (!(*head))
	{
		(*head) = new_node;
		free(current);
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	return (new_node);
}
