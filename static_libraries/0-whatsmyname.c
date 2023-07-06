#include <stdio.h>
/**
 *main - Write a program that prints the name
 *@argc: counts the arguments
 *@argv:hold arguments
 *Return: will be 0 if it is passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
