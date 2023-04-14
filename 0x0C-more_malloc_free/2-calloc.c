#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char c, size_t n);

/**
 * _calloc - fills memory with a constant byte
 * @nmemb: array number of element
 * @size: size of each element of the array
 *
 * Return: pointer to the memory area s
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int t_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Total size of the memory block to be allocated */
	t_size = nmemb * size;

	/* Allocate the memory block */
	ptr = malloc(t_size);

	if (ptr == NULL)
		return (NULL);

	/* set memory to 0 */
	_memset(ptr, 0, t_size);

	return (ptr);
}


/**
  * _memset - set the memory to zero
  * @s: pointer of string
  * @c: string to fill
  * @n: number of bytes to fill
  * Return: none
 */

char *_memset(char *s, char c, size_t n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
