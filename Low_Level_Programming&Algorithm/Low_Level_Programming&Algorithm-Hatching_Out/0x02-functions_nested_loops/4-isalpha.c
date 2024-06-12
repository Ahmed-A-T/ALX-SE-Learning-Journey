/*
 * Filename: 4-isalpha.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * Return: 1 if c is a letter and otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return 1;
	return 0;
}
