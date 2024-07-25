/*
 * Filename: 101-natural.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: returns 0
 */
int main(void)
{
	int n, result = 0;
	for (n = 1; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d\n", result);
	return (0);
}
