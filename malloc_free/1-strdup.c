#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
char *_strdup(char *str)
{

	int len;
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	p = malloc(sizeof(char) * len + 1);

	if (p == NULL)
		return (NULL);

	while (i < len)
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
