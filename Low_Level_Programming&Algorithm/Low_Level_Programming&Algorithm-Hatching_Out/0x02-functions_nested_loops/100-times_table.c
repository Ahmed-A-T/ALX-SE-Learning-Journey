/*
 * Filename: 100-times_table.c
 * Author: Ahmed-A-T
 */
#include "main.h"
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
				if (result < 10)
				{
					putchar(result + '0');
				}
				else if ((result < 100) && (result >= 10))
				{
					putchar((result / 10) + '0');
					putchar((result % 10) + '0');
				}
				else
				{
					putchar((result % 10) + '0');
					putchar((result % 100) / 10 + '0');
					putchar((result / 100) + '0');
				}
				if(j < n)
				{
					putchar(',');
					putchar('	');
				}
			}
			putchar('\n');
		}
	}
}
 int main(void)
{
	print_times_table(12);

	return (0);
}
