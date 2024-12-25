/*
 * Filename: 101-print_number.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number want to print
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while ((n / divisor) >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar(((n / divisor) % 10) + '0');
		divisor /= 10;
	}
}
