#include "main.h"

/**
 **_strncat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 * @n:absolute vaues of characters in string
 * Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}

	dest[n + i] = '\0';

	return (dest);
}


