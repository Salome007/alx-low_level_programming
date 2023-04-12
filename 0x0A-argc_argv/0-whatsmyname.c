#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * main - main function
  * @argc: number of arguments passed to the program
  * @argv: one-dimensional array of strings
  * Return: always 0
  */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
