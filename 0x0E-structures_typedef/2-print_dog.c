#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function for printing
 * @d: return nil
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;


		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
