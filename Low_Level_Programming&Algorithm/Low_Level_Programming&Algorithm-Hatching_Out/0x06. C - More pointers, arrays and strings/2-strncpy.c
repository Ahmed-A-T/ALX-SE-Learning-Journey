/*
 * Filename: 2-strncpy.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _strncpy - Copy srtings
 * @dest - A pointer to the destination that the string will copied to it
 * @src - A Pointer to the string need to copy
 * @n - the number of the string to copy from the source
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
