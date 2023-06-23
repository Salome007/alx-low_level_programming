#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: destination pointer
  * @b: constant byte
  * @n: number of bytes to copy
  * Return: pointer to dest
  */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		/* copy only this constant value */
		s[i] = b;
		i++;
	}

	return (s);
}
