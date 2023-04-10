#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: search string
 * Return: pointer to s if true else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return (NULL);
}
