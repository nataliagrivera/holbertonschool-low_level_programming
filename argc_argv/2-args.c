#include <stdio.h>
/**
 *main - prints all the arguments it receives
 *@argc: counts the arguments
 *@argv: holds the string of arguments
 *Return: 0 if passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
