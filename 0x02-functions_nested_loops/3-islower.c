#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase values
 *
 * @c: value to be checked
 *
 * Return: 1 if true or 0 if false
 */

int _islower(int c)
{
	int low = c;

	if (low < 'a' || low > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
