/*
 * Filename: 0-memset.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * memset - Fills memory with a constant byte
 * @s: A pointer to the memory area that need to fill
 * @b: The Constant byte that will fill memory area
 * @n: The number of bytes that we need to fill in the memory area
 *
 * Return: Returns a pointer to the memory area's
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; (i < n); i++)
	{
		s[i] = b;
	}
	return (s);
}
