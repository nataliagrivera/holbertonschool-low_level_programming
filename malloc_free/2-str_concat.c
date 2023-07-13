#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - concatenates two strings
 *@s1: first string to be concatenated
 *@s2: second string to be concatenated
 *Return: return null if null and return new string on success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *p;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int size = s1_len + s2_len + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < s1_len)
	{
		p[i] = s1[i];
		i++;
	}

	while (j < s2_len)
	{
		p[i++] = s2[j];
		j++;
	}

	return (p);
}
