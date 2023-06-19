#include <stdio.h>

/*
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char beta;
	char alpha;

	for (beta = 'a'; beta <= 'z'; beta++)
		putchar(beta);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
