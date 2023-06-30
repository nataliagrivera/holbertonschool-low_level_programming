 #include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i++] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

