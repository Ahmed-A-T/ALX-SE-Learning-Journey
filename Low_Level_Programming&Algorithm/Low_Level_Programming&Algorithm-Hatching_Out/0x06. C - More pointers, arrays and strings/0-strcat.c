/*
 * Filename: char *_strcat(char *dest, char *src);
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the destination for appending the source string to it
 * @src: the source string want to add to the dest
 *
 * Return: return a pointer to the string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len += 1;
	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = *(src++);
	dest[len] = '\0';
	return (dest);
}
