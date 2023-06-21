#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_islower - entry point
 *
 *@c: holds int value
 *
 *Return: always 0.
 */
int _islower(int c)
{
	c = islower(c);

	if (c != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
