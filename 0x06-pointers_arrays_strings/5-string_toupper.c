#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
  * @s: the character to transform
  * Return: uppercase char
  */

char *string_toupper(char *s)
{
	int i = 0;

	/*
	 * using ASCII CODE
	 * the lowercase letters a to z have the decimal values 97 to 122
	 * the uppercase letters A to Z have the decimal values 65 to 90.
	 */
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
