/**
 * Filename: 3-islower.c
 * Author: Ahmed-A-T
 */

#include "main.h"
/**
 * _islower: Checks for lowercase character
 *
 * Return: 1 if C is lower and 0 oterwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
