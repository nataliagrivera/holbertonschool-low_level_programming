#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - to execute funtion
 * Return: print random number
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%d is positive",n);
	return (0);
}
