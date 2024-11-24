/*
 * Filename: 9-strcpy.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to the destination buffer
 * where the string will copied
 * @src: The pointer to the source string that will be copied into dest.
 *
 * Return: Returns a pointer to a character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
