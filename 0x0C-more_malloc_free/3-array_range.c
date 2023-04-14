#include <stdlib.h>
#include "main.h"


/**
  * _get_min - get the smallest value
  * @num1: first number
  * @num2: second number
  * Return: the small value
 */

int _get_min(int num1, int num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}


/**
  * _memset_ - set the memory to the given number
  * @s: pointer of string
  * @c: string to fill
  * @n: number of bytes to fill
  * Return: none
 */

int *_memset_(int *s, int c, size_t n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
		c++;
	}

	return (s);
}




/**
  * array_range - creates an array of integers.
  * @min: min value of interger
  * @max: max value of interger
  * Return: pointer to array of integer
 */


int *array_range(int min, int max)
{
	int *ptr;
	unsigned int num;

	if (min > max)
		return (NULL);

	/* get the total number of elements */
	num = max - min + 1;

	/* allocated the amount size */
	ptr = malloc(num * sizeof(int));

	if (ptr == NULL)
		return (NULL);


	return (_memset_(ptr, _get_min(min, max), num));
}
