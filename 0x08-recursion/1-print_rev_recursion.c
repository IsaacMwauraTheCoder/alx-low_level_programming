#include "main.h"

/**
 * _print_rev_recursion - printing a string in reverse
 * @s: pointer to first address
 * Return: string
 */

void _print_rev_recursion(char *s)
	{
		if (*s)
		{
			_putchar(*s);
			_print_rev_recursion(s + 1);
		}
		_putchar('\n');
	}
