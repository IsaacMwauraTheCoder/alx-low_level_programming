#include <stdio.h>

/**
 * main - table  using for loop
 * Return: 0
 */

int main(void)
	{
	int i = 1;
	int j = 1;
		for (i = 1; i <= 10; i++)
			{
			for (j = 1; j <= 10; j++)
			{
				printf("%d * %d = %d\n", i, j, i*j);
			}
			printf("\n");
	}
	return (0);
		}
