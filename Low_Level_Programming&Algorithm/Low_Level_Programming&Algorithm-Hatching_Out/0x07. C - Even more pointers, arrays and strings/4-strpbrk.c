/*
 * Filename: 4-strpbrk.c
 * Author: Ahmed-A-T
 */

#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: The String to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: returns a pointer to the byte in s
 * that matches one of the byte in accept, or NULL of no such byte is found.
 */
/*
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
*/
/* Another Solution */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
    char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
	}
	return (NULL);
}
