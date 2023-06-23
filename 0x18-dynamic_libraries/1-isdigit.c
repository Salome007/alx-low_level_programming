#include "main.h"

/**
  *_isdigit - check if the input is digit
  *Return: 1 if true and 0 if not
  *@c: the current nput arg
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
