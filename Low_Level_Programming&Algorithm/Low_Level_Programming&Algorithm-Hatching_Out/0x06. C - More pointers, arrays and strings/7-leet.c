/*
 * Filename: 7-leet.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * leet - encodes the str into 1337
 * @str: The str need to encode
 *
 * Return: a pointer to the encoded str
 */
char *leet(char *str)
{
	int i, j;
	char normal[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
				str[i] = leet[j];
		}
	}
	return (str);
}
