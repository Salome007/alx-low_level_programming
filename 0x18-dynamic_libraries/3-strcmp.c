#include "main.h"

/**
  * _strcmp -  a function that compares two strings.
  * @s1: first string to compare
  * @s2: second string to compare
  * Return:an integer indicating the result  of  the comparison
  */


int _strcmp(char *s1, char *s2)
{
	/* compare each character of both  strings */

	/* if the firsts character are the same*/
	while (*s1 == *s2)
	{
		/*
		 *check if this character is the last one
		 * if true then the strings are the same
		 */
		if (*s1 == '\0')
			return (0);
		/* else compare the following character */
		s1++;
		s2++;
	}

	/*
	 * if the two strings are not the same
	 * return the difference
	 */

	return (*s1 - *s2);
}
