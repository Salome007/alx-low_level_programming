#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	char swap;

	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap;
	}
}
