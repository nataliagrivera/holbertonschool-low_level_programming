#include "main.h"
/**
 *puts2 - main entry
 *
 * @str: prints every other in in a string.
 */

void puts2(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[a]);
	}
	_putchar ('\n');
}
