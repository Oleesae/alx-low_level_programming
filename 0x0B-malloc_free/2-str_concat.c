#include "main.h"
#include <stdlib.h>

/**
 * _len - calculates the length of a string, s
 * @s: string
 *
 * Return: length of string, s
 */

int _len(char *s)
{
	int len;

	/* count through each character */
	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}

/**
 * str_concat - joins twe strings, s1 and s2
 * and returns a pointer to its new memory space
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j; /* s1 and s2 index number */
	int len1, len2;

	/* treat NULL as empty string */
	if (s1 == NULL)
		len1 = 0;
	else
	       len1 = _len(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _len(s2);

	/* allocate memory space to str */
	str = malloc(len1 + len2 + 1);
	/* check str returns NULL, stop program */
	if (str == NULL)
		return (NULL);

	/* assign s1 to str */
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
		continue;
	}

	/* assign s2 to str */
	for (j = 0; j < len2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0'; /* add null byte to end of string */
	return (str);
	free(str);
}
