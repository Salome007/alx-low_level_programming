#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to an unsigned int.
  * @b:pointer to the first byte
  * Return: the converted number, or 0 if
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int sum = 0, i = 1;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (*b != '\0')
	{
		/*
		 * convert the char to integer => (*b - '0')
		 */
		sum += ((*b) - '0') << (len - 1);
		len -= 1;
		i++;
		b++;
	}

	return (sum);

}
