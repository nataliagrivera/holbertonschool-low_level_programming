#include "main.h"
/**
 *check - checks input
 *@n:squared number
 *@b:base of equation
 *Return: square root of number checked
 */
int check(int b, int n)
{

	if (n * n == b)
	{
		return (n);
	}
	if (n * n > b)
	{
		return (-1);
	}
	return (check(n + 1, b));
}
/**
 *_sqrt_recursion - returns square root of n
 *
 *@n: will check square root
 *
 *Return: the natural quare root
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
