#include "main.h"
/**
 *print_rev - print reverse string
 *
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int c = 0;

	for (; s[c] != 0; c++)
	{}

	for (c = c - 1; c >= 0; c--)
		_putchar (s[c]);
	_putchar('\n');
}
