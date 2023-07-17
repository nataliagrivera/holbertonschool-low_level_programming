#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 *
 * Return: (NULL) at failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n < s2_len)

		p = malloc(sizeof(char) * (s1_len + n + 1));
	else
		p = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		p[i++] = s2[j];
	}

	p[i] = '\0';
	return (p);
}
