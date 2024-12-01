/*
 * Filename: 4-rev_array.c
 * Author: Ahmed-A-T
 */

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverse the content of an array
 * @a: The Array that need to reverse it
 * @n: the number of the array element.
 */
void reverse_array(int *a, int n)
{
	int i, tmp, l_index;

	l_index = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[l_index];
		a[l_index] = tmp;
		l_index--;
	}
}
