#include "main.h"

/**
 * int _strlen_recursion - counts the length of string
 * Return: length
 */

int _strlen_recursion(char *s)
	{
	
	int l = 0;

	if (*s)
		{
		l++
		l = l + _strlen_recursion(s+1);
		}
	return(l);	
	}
