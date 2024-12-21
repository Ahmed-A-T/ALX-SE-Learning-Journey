/*
 * Filename: 100-rot13.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * rot13 - encodes a string using ROT13 (Rotate 13)
 * @str: The string that need to encode using ROT13
 *
 * Return: A Pointer to encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rotate13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				str[i] = rotate13[j];
				break;
			}
		}
	}
	return (str);
}
