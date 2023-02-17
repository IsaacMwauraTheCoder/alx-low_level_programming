#include <stdio.h>

/**
 * main - printing alphabets
 * Return: sucess
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
