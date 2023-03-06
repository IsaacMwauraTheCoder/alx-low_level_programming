#include "main.h"

/**
 * char *_memcpy - copy memory area
 * @n:
 * @scr:
 * dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
	{
		int i = 0

		for (i = 0; n > 0; n--, i++)
		{
		dest[i] = src[i];
		}
		return (dest);
