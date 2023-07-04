#include "main.h"
/**
 *_pow_recursion - elevate x to the power of y
 *@x:base
 *@y:power
 *Return: if y is less than 0 then -1
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
