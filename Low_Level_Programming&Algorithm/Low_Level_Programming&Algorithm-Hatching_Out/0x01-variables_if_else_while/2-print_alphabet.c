/*
 * Filename: 2-print_alphabet.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar(10);

	return (0);
}
