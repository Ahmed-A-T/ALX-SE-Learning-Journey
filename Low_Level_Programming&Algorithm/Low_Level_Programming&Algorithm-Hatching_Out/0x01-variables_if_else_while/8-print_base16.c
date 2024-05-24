/*
 * Filename: 8-print_base16.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char hexa_number;

	for (hexa_number = '0'; hexa_number <= '9'; hexa_number++)
		putchar(hexa_number);

	for (hexa_number = 'a'; hexa_number <= 'f'; hexa_number++)
		putchar(hexa_number);

	putchar('\n');

	return (0);
}
