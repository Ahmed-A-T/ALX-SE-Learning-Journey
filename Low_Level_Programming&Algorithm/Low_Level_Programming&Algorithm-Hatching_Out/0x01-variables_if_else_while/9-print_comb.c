/*
 * Filename: 9-print_comb.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>

/**
 * main - Prints all possibel combination of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		/*
		 * Here compiler will convert '0' to equivalent
		 * ASCII Deciaml number that equal to 48 and add 1 for
		 * every loop
		 */
		putchar(number + '0');

		if (number == 9)
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
