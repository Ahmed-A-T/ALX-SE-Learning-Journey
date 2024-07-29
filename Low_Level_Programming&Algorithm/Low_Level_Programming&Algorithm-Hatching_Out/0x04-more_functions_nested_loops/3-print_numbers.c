/*
 * Filename: 3-print_numbers.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	char digit;

	for (digit = '1'; digit <= '9'; digit++)
		_putchar(digit);
	_putchar('\n');
}
