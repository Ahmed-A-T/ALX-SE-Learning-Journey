/*
 * Filename: 102-fibonacci.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long i, fib1 = 0, fib2 = 1, sum;

	for (i = 0; i <= 49; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf("%lu", sum);
		if (i < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
