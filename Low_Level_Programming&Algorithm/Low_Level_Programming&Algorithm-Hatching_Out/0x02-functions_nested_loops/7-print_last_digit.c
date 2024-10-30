/*
 * Filename: 7-print_last_digit.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: number to get lastdigit from it
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
