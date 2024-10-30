/*
 * Filename: 104-fibonacci.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	int i;

	for (i = 0; i <= 98; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf("%lu", sum);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
