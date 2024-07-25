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
	long int i, n1 = 1, n2 = 2, sum;

	printf("%lu, %lu", n1, n2);
	for (i = 1; i <= 48; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf(", %lu", sum);
	}
	printf("\n");
	return (0);
}
