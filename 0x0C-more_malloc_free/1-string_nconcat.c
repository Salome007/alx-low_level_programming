#include <stdlib.h>
#include "main.h"

/**
  * _len - the function name
  * @str: parameter of type char *.
  * Return: int .
 */

int _len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _len(str + 1));
}


/**
  * _copy - copy str1, str2 in str3
  * @s1: first string
  * @s2: second string
  * @s3: copy string
  * @n: number of bytes to copy
  * Return: str3
 */


char *_copy(char *s1, char *s2, char *s3, int n)
{
	int i, j, len1 = 0;

	/* get length */
	len1 = _len(s1);

	/* copy s1 */
	for (i = 0; i < len1; i++)
	{
		*(s3 + i) = *(s1 + i);
	}

	/* copy s2 */
	for (j = 0; j < n; j++)
	{
		if (s2[j] == '\0')
		{
			break;
		}
		*(s3 + i + j) = *(s2 + j);
	}
	s3[i + j] = '\0';

	return (s3);
}

/**
  * string_nconcat - function that concatenates two strings.
  * @s1: first string parameter
  * @s2: second string parameter
  * @n:number of s2 bytes to copy
  * Return: pointer to new concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _len(s1);
	len2 = _len(s2);

	/* required memory space */
	if (n < len2)
		len3 = len1 + n + 1;
	else
		len3 = len1 + len2 + 1;

	s3 = malloc(sizeof(char) * len3);

	if (s3 == NULL)
		return (0);

	return (_copy(s1, s2, s3, n));
}
