#include <stdio.h>
#include "main.h"
/**
 * print_sign - entry point
 *
 *@n: hold int value
 *
 * Return: 1, -1, 0
 *
 */
int print_sign(int n)
{

	n = print_sign(n);

	if (n > 0)
	{
		putchar ('+');
		return (1);
	}

	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
