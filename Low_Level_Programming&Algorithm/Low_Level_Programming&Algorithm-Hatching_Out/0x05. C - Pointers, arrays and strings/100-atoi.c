/* 
 * Filename: 100-atoi.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * _atoi - Extraction the string from the inserted string
 * @s: The string that we want to extract numbers from it
 *
 * Return: The number that extracted from the inserted string.
 */
int _atoi(char *s)
{
	int i = 0, res = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + (s[i] - '0');
		else if (s[i] == '-')
			sign *= -1;
		i++;
	}
	return (res * sign);
}
