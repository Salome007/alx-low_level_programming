#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	/* get the length of dest */

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	/* add src to the end of dest if j is less than n */

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
