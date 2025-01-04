/*
 * Filename: 1-memcpy.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * memcpy - Copies memory area
 * @dest: The destination for the copied area
 * @src: The source memory area that we want to coy into dest
 * @n: The number of elements that want to copy from src to dest
 *
 * Return: returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
