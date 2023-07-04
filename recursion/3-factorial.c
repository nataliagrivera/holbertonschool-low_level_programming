#include "main.h"

/**
 * factorial - provides factorial
 *
 *@n: variable used in factorial function
 *Return: 1 factorial of 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
