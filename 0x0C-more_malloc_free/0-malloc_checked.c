#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
* @b: parameter of type unsigned int .
* Return: void *.
*/
void *malloc_checked(unsigned int b)
{
	void *addr = (void *) malloc(b);

	if (addr == NULL)
	{
		exit(98);
	}
	return (addr);
}
