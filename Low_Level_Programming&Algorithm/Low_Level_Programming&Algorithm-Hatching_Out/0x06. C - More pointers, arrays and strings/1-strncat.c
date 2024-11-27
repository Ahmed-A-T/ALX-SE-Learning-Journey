/*
 * Filename: char *_strcat(char *dest, char *src);
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: the destination for appending the source string to it
 * @src: the source string want to add to the dest
 * @n: the specific number of the string from the source,
 * to append to destination
 *
 * Return: return a pointer to the string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len += 1;
	for (i = 0; src[i] != '\0'; i++)
	{
		if (n > i)
			dest[len++] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
