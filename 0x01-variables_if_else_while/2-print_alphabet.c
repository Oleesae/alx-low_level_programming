#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;

	p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}

	putchar('\n');


	return (0);
}

