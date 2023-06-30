#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @b: The string that will be modified
 *
 * Return: b
 */

char *string_toupper(char *b)
{
	int x = 0;

	while (b[x])
	{
		if (b[x] >= 97 && b[x] <= 122)
		{
			b[x] -= 32;
		}
		x++;
	}
	return (b);
}

