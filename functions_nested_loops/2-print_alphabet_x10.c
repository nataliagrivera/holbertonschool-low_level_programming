#include "main.h"
#include <stdio.h>
/**
 *print_alphabetx10 - entry point
 *
 *Return: always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 0;

	do {
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		n++;

	} while (n < 10);
}
