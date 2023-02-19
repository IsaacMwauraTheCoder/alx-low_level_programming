#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing alphabets
 * Return: sucess
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
