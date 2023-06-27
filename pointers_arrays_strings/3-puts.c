#include "main.h"
/**
 *_puts - entry point
 *
 *@str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
