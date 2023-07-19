#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_name - point to function which prints name
 *@name: hold string to be printed
 *@f: points to a print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
