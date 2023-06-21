#include "main.h"
/**
 * print_last_digit- entry point
 *
 * @l: holds int value
 *
 * Return: last digit
 */
int print_last_digit(int l)
{
	l = l % 10;
	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = l * -1;
		_putchar(l + '0');
		return (l);
	}

}





