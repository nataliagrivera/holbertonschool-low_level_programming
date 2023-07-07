#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies
 *@argc: amount of arguments
 *@argv: hold string of arguments
 *Return: 0 when passed
 */
int main(int argc, char *argv[])

{

	int a;
	int b;
	int c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
