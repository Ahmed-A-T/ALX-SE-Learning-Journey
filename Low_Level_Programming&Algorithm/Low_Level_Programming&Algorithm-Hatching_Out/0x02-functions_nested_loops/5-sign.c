/*
 * Filename: 5-sign.c
 * Author: Ahmed-A-T
 */

#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * Return: 1 if n is greater than 0
 * Return: 0 if if n is equal to 0
 * Return: -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(0 + '+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar(0 + '-');
		return (-1);
	}
}
