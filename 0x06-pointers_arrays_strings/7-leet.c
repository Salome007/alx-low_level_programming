#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string to be encoded
 * Return: the resulting string;
 */



char *leet(char *s)
{
	int i = 0;
	int j;

	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	while (s[i] != '\0')
	{
		j= 0;
		while (j <= 9)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
