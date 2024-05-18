/*
 * Filename: 0-positive_or_negative.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Check if the stored number in the variable n
 * is positive or negative.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	/* The generated random number and stored inside variable n */
	n = rand() - RAND_MAX / 2;
	/* The Checks Conditions */
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

	return (0);
}
