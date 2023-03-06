#include "main.h"

/**
 * char *_memset - filling a memory with a constant byte
 * @n: size of memory
 * @s: pointer to a
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
	{
		int i = 0;
	
	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (s);
	}
