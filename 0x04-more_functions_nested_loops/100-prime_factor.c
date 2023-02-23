#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number;

	number = 612852475143;

	if (isPrime(number))
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}
