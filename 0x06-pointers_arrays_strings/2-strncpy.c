#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
