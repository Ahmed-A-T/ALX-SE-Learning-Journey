/*
 * Filename: 2-strchr.c
 * Author: Ahmed-A-T
 */

#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s - The string that we want to search inside
 * @c - The character that we want to find inside the string
 *
 * Return: returns a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s + i);
}
