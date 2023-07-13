#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
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
	while(i < s1_len)
	{
		p[i] = s1[i];
		i++;
	}

	while(i < s2_len)
	{
	p[s1_len + i] = s2[i];
	}

	p = malloc(sizeof(char) * size + 1);

	p[size - 1] = '\0';

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
