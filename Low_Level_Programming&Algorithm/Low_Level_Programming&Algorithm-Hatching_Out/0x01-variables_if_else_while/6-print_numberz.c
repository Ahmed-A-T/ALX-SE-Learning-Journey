/*
 * Filename: 5-print_numbers.c
 * Author: Ahmed-A-T
 */

/**
 * main - Prints numbers from 0 To 9
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
	int number = '0';

	for (; number <= '9'; number++)
		putchar(number);
	printf("\n");
	printf("%d ", putchar('0'));
	return (0);
}
