#include "main.h"
/**
 **_strncat - function that concatenates two strings
 *
 *@dest: the first string to be added
 *@src: string is appended at the end of dest
 *
 * Return: returns concatenated strings
 */
char *_strncat(char *dest, char *src)
{
 
	int a; 

	for(a = 0; dest[a] !='\0'; a++)
	{
		dest[a]= src[a];
	}

	dest[a]= '\0';

		return(dest);
}

