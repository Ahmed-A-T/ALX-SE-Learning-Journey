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
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);

		if (number == '9')
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
