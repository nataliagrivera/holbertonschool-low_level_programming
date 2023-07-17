#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - function that prints struct dog
 *@d: string to be printed
 *Return: return nil if null and return elements on success
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
	{
		printf("Name: %s\n", d->name);
	}

		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);

}
