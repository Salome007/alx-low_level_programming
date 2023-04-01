#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/*
	 *copy n characters from src to dest.
	 *It may overwrite current data
	 */

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/*
	 *if i less than n we fill all the
	 * existing spaces with '\0'
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
