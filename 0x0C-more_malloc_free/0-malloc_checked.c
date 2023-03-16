#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of string
 * Return: 98 if null
 */

void *malloc_checked(unsigned int b)
	{
	void *p;

	p = malloc(b);

	if (p == NULL)
		{
		exit(98);

	}
	return (p);
	}
