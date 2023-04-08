#include "main.h"

/**
 * get_length - return the length
 * @s: pointer of char
 * Return: int
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}

/**
 * helper - recursive function
 * @s: pointer to string
 * @len: length of the string
 * @i: iterator
 * Return: int
 */


int helper(char *s, int len, int i)
{
	if (i == len / 2)
		return (1);
	if (s[i] == s[len - 1 - i])
		return (helper(s, len, i + 1));
	return (0);
}


/**
 * is_palindrome - main function
 * @s:pointer of string
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len <= 1)
		return (1);
	return (helper(s, len, 0));
}
