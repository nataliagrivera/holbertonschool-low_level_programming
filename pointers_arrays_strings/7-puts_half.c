#include "main.h"
/**
 *puts_half = function that print half
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}

	if(a % 2 == 1)
	{	
		b = (a - 1)/2;
		b += 1;
	}

		else
		{
			b = a / 2;
		}

	for(b = 0; b < a; b++);
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
