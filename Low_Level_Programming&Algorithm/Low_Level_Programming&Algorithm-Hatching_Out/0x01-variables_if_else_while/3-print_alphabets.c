/*
 * File name: 3-print_alphabets.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char low_letter = 'a', upper_letter = 'A';

	for (; low_letter <= 'z'; low_letter++)
		putchar(low_letter);
	for (; upper_letter <= 'Z'; upper_letter++)
		putchar(upper_letter);
	/* The Line Feed or the new line in ASCII Table is equla to 10 */
	putchar(10);

	return (0);
}
