#include "main.h"

/**
 * void _puts_recursion - printing a string
 * Return: string
 */

void _puts_recursion(char *s)
	{
		if (*s)
		{
			_putchar(*s);
			_puts_recursion((s+1));
	}
		_putchar('\n');
		}
