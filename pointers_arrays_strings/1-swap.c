#include "main.h"
/**
 * swap_int - entry point
 *
 *@a: value to be switched
 *
 *@b: value to be switch
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;
		*a = *b;
		*b = ptr;
}
