#include "main.h"

/**
 *print_rev -  a function that prints a string,
 *in reverse, followed by a new line.
 *@s: the current string to reversed
 *Return: None
 */

void print_rev(char *s)
{
	/* get the string length*/

	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	/* print reverse string */

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
