/*
 * Filename: 100-times_table.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: number that we need to print it's times table
 *
 */
void print_times_table(int n)
{
	int i, j, result = 0;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == n)
					printf("%d", result);
				else
					printf("%d,   ", result);
			}
			printf("\n");
		}
	}
}
