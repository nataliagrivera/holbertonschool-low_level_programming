#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: holds int value
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	c = isalpha(c);

	if (c != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
