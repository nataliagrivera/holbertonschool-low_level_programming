#include "main.h"

/**
 **_strcat - concatenates two strings
 *
 *@dest: string to concatanate
 *
 * @src: string to concatnate
 *
 * Return: a pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[a++] = src[b];
		}
	dest[a] = '\0';

	return (dest);
}

