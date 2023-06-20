#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	/* get the length of dest */

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	/* add src to the end of dest */

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
