/*
 * Filename: 103-infinite_add.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: returns a pointer to tehe result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k = 0, sum = 0, carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (size_r <= (i + 1) || size_r <= (j + 1))
		return (0);
	i -= 1;
	j -= 1;
	while (i >= 0 || j >= 0 || carry)
	{
		if (i >= 0)
		{
			sum += (n1[i--] - '0');
		}
		if (j >= 0)
		{
			sum += (n2[j--] - '0');
		}
		sum += carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		sum = 0;
		if (k > (size_r - 1))
			return (0);
	}
	r[k] = '\0';
	for (i = 0, j = (k - 1); i < j; i++, k--)
	{
		char tmp;

		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}
