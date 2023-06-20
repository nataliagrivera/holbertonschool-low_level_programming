#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0.
 */

int main(void)
{

	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig);

	if (dig < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
