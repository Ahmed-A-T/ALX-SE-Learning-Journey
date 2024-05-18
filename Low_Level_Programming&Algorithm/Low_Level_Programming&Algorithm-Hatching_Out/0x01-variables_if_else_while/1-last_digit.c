/*
 * Filename: 1-last_digit.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints the value of randomly generated number and check if,
 *	greater than 5, or equla to 0,
 *	or less than 6 and not equal to 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	/* The generated random number and stored inside variable n */
	n = rand() - RAND_MAX / 2;
	/* The Checks Conditions */
	last_digit = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);

	return (0);
}
