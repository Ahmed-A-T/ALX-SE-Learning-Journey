/*
 * Filename: 1-swap.c
 * Author: Ahmed-A-T
 */
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to the first number
 * @b: a pointer to the second number
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
