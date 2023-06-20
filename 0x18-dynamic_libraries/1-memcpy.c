#include "main.h"

/**
  * _memcpy -  function copies n bytes from memory
  * area src to memory area dest
  * @dest: destination pointer
  * @src: memory area to copy from
  * @n: number of bytes to copy
  * Return: pointer to dest
  */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		/* copy all elements */
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
