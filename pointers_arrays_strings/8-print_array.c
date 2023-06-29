#include "main.h"
#include <stdio.h>
/**
 *print_array - prints array of integers
 *
 * @a: the array
 *
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		if (b != n - 1)
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
		b++;
	}
	putchar('\n');
}
