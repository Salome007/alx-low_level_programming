#include "lists.h"


/**
  * list_len - return the length of the input
  * @h: pointer to struct
  * Return: int
  */


size_t list_len(const list_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
