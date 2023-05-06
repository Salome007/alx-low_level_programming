#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int len = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, len = 0; (temp >>= 1) > 0; len++)
	;

	while (len  >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
