#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
