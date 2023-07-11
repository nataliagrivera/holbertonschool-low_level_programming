#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *pC;
	unsigned int i;

	pC = malloc(size * sizeof(*pC));
	
	if(size == 0)
	{
	return(NULL);
	}

	if (pC == NULL)
	{
		return
			(NULL);
	}

	i = 0;

	while(i <size)
	{
		pC[i] = c;
		i++;
	}
	return (pC);
}
