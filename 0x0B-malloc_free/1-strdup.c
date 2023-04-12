#include <stdlib.h>
#include "main.h"

int _len(char *str);


/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */


char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = _len(str);

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
}




/**
  * _len - get the length of parameter
  * @str: string
  * Return: length
  */

int _len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _len(str + 1));
}
