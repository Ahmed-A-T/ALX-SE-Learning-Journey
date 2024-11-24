/*
 * Filename: 8-print_array.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: The Array need to print its element
 * @n: The number of element need to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
