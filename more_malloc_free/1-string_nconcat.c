#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string to be used
 *@s2: second string to be added
 *@n: amount of bytes used from s2
 *Return: NULL on failure and concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;
	unsigned int s1_len;
	unsigned int s2_len;

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

	while (i < s1_len)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		p[i++] = s2[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}


