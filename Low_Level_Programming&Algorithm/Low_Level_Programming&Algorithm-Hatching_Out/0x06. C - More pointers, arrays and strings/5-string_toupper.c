/*
 * Filename: 5-string_toupper.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @*: A pointer to the first character for the string need to capitalize it
 * Return: return a pointer to the capitalized string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ' ';
	}
	return (str);
}
