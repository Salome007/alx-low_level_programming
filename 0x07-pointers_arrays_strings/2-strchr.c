#include "main.h"
#include <stddef.h>

/**
  * _strchr - function that locates a character in a string
  * @s: pointer of string
  * @c: search character
  * Return: c if found else NULL
  */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	/*
	 * while the current character and c are
	 * not the same then continue
	 */
	while (s[i] != c)
	{
		/* return NULL if it's the last character */
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	/* return the memory address of the first occurrence */
	return (&s[i]);
}
