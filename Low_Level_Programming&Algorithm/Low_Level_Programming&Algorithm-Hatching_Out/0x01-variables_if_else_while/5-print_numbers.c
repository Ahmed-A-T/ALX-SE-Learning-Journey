/*
 * Filename: 5-print_numbers.c
 * Author: Ahmed-A-T
 */

/**
 * main - Prints numbers from 0 To 9
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
