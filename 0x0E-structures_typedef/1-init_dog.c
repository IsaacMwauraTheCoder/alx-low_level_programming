#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing a variable
 *  @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
