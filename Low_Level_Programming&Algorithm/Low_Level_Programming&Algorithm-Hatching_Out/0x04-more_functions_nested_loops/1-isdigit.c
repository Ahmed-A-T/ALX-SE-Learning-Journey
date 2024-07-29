/*
 * Filename: 1-isdigit.c
 * Author: Ahemd-A-T
 */

# include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: item need to be check
 *
 * Return: returns 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}

	return (0);
}
