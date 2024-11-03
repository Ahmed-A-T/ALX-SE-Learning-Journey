/*
 * Filename: 3-puts.c
 * Author: Ahmed-A-T
 */

#include "main.h"
/**
 * _puts - Prints a string, followed by a newline.
 * @str: The string need to print on the screen.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
