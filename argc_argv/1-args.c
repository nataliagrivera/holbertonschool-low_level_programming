#include <stdio.h>
/**
 *main - counting the number of arguments
 *@argc: will count number of arguments passed through the function
 *@argv: will be unused
 *Return: 0 if passed
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
		printf("%d\n", argc - 1);
		return (0);
}
