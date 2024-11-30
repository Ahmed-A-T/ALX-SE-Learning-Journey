/*
 * Filename: 3-strcmp.c
 * Author: Ahmed-A-T
 */

/**
 * _strcmp - Compares between two strings
 * @s1: The First string.
 * @s2: The Second String.
 *
 * Return: it will return
 * 0 if the two strings are similar
 * a negative if the string s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		res += s1[i] - s2[i];
		if (res > 0 || res < 0)
			break;
	}
	return (res);
}
