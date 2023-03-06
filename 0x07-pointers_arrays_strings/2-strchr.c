#include "main.h"

/**
 * char *_strchr - locates a character
 * @c: character to be located
 * @s: string
 * *NULL: return if not found
 */

char *_strchr(char *s, char c)
	{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] = c)
				return (s);
			}
		return (\0');
		}

