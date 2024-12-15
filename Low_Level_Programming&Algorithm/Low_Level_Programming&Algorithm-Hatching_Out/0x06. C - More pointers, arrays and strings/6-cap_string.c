/*
 * Filename: 6-cap_string.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: the string that we want to capitalize
 *
 * Return: return a pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {'!', '\t', '\n', ',', ';', '.', ' ', '?', '"', '(',
	')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= ' ';
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= ' ';
				}
				j = 0;
			}
		}
	}
	return (str);
}
