#include "main.h"
/**
 **leet - funcition that prints in leet
 *@p: string provided
 *Return: value of the edited string
 */
char *leet(char *p)
{
	int l, n;

	char letter[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	char number[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (l = 0; p[l] != '\0'; l++)
	{
		for (n = 0; n < 10; n++)

		{
			if (p[l] == letter[n])
			{
				p[l] = number[n];
			}
		}
	}
	return (p);
}
