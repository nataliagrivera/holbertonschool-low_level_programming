#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int single;

	for (single = 0; single < 10; single++)
		printf("%d", single);

	putchar('\n');

	return (0);
}
