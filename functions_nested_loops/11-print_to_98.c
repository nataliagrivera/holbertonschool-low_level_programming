#include <stdio.h>
/**
 * print_to_98 - entry point
 *
 * @n: holds int value
 *
 * Return: the value of int
 */
int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	return (n);
}
