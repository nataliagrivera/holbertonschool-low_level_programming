#include "main.h"
/**
 *
 *
 *
 */
char *_strncat(char *dest, char *src);
{
 
	int a; 

	for(a = 0; dest[a] !='\0'; a++)
	{
		dest[a]= src[a];
	}

	dest[a]= '\0';

		return(dest);
}

