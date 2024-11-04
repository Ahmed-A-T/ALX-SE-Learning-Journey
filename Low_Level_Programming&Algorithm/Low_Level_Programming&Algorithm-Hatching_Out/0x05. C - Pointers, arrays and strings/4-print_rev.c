/*
 * Filename: 4-print_rev.c
 * Author: Ahmed-A-T
 */
#include "main.h"

/**
 * print_rev - Prints a string, in reverse followed by new line.
 * @s: The string need to reverse.
 *
 */
void print_rev(char *s)
{
	int i, length;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	length = i;
	for (; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
