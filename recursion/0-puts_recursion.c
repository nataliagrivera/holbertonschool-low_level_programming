#include "main.h"
/**
 *_puts_recursion - function that recalls itself
 *
 *@*s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	return(0);

	putchar(*s);
	_puts_recursion(s + 1);

}
