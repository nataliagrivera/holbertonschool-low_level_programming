#include "main.h"
/**
 *_print_rev_recursion - printing in reverse
 *
 *@s: string to be printed in reverse
 *
 * Return: nothing will be returned.
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
