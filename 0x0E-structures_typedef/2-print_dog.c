#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print struct dog details.
 *
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("nil\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
