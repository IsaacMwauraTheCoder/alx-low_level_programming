#include "main.h"

/**
 * void _print_rev_recursion - printing a string in reverse
 * Return: string
 */

void _print_rev_recursion(char *s)
        {
                if (*s)
                {
                _putchar(*s);
                _print_rev_recursion(s+1);
        }
                _putchar('\n');
                }
~                     
