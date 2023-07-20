#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given as a
 *                  parameter on each element of an array.
 * @array: the array to be sorted
 * @size: size of array
 * @action: pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
