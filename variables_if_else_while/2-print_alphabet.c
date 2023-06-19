#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
