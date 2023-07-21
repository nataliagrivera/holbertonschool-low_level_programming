#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_them_all - sumation of all arguments
 *@n: integers to sum
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list arg_sum;

if(n == 0)
	return(0);
va_start(arg_sum, n);
sum = 0;

for(i = 0; i < n; i++)
	sum += va_arg(arg_sum, int);

va_end(arg_sum);
return(sum);

}
