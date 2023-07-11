#include "main.h"
#include <stdlib.h>
/**
 *create_array - will create array.
 *@size: holds lenght of array
 *@c: charcter that holds value of array
 *
 * Return: NULL if 0 or NULL, if not string
 */
char *create_array(unsigned int size, char c)
{
	char *pC;
	unsigned int i;

	pC = malloc(size * sizeof(*pC));

	if (size == 0)
	{
	return (NULL);
	}

	if (pC == NULL)
	{
		return
			(NULL);
	}

	i = 0;

	while (i < size)
	{
		pC[i] = c;
		i++;
	}
	return (pC);
}
