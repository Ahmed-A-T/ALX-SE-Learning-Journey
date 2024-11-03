/*
 * Filename: 2-strlen.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>
/**
 * _strlen - function taht returns the length of a string
 * @s: the string needed to calculate it's length
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
