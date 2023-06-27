#include "main.h"

void print_rev(char *s)
{
	int c = 0;

	for (; s[c] != 0; c++)
	{}

	for (c = c - 1; s[c] >= 0; c--)
	{
		_putchar (c);
	}
	_putchar('\n');
}
