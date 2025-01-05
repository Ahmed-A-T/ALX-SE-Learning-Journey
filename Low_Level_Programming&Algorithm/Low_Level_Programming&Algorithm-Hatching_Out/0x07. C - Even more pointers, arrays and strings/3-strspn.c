/*
 * Filename: 3-strspn.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String that consists of the initial segmento compare with accept
 * @accept: The string that we want to find in the S string
 *
 * Return: return the number of bytes in the initial segment of S
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				counter += 1;
		}
	}
	return (counter);
}
