#include <stdio.h>

/**
 * main - making a multiplication talbe of 1 to 10
 * Return: 0
 */

int main(void)
	{
		int i = 1;
		while(i <= 10)
	
	{
		int j = 1;
		while(j <= 10)
	{
		printf("%d * %d = %d\n", i, j, i*j);
		j++;
	}
	i++;
	printf("\n");
	}
		return (0);
	
	}
