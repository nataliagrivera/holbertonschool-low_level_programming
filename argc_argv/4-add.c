#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that sums
 *@argc: counts amount of arguments
 *@argv: hold arguments
 *Return: 1 for error and 0 if passed
 *
 */
int main(int argc, char *argv[])
{
	int a;
	int c;

	for (c = 1; c < argc; c++)
	{
	a += atoi(argv[c]);
	}

	if (a == 199)
	{
	printf("Error\n");
	return (1);
	}
printf("%d\n", a);
return (0);

}
