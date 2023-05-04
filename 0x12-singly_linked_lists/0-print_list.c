#include "lists.h"
#include <stddef.h>
#include <stdio.h>



/**
  * print_list - function that prints all the elements of a list_t list.
  * @h: pointer to struct list
  * Return: number of nodes
  */


size_t print_list(const list_t *h)
{
	char *str;
	int len, i = 0;

	if (!h)
		return (0);

	do {
		len = h->str ? h->len : 0;
		str = h->str ? h->str : "(nil)";
		printf("[%d] %s\n", len, str);
		h = h->next;
		i++;
	} while (h);

	return (i);
}
