/*
 * Filename: 103-fibonacci.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in \
 * Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: returns 0
 */
int main(void)
{
	long int fib1 = 0, fib2 = 1, sum = 0, result = 0;
	int i = 0;

	for (; ; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			result += sum;
	}
	printf("%lu\n", result);

	return (0);
}

