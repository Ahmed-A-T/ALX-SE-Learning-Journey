/*
 * Filename: 7-puts_half.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string need to print the half of it
 */
void puts_half(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len += 1;
	len += 1;
	for (i = len / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
