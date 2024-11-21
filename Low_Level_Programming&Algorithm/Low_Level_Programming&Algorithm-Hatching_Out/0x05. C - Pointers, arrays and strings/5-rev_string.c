/*
 * Filename: 5-rev_string.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the sting need to reverse
 */
void rev_string(char *s)
{
    int i,
    len = 0, /* The Total Array Length */
    l_index; /* l_index index of the string */
    char tmp; /* the temporary variable */

    for (i = 0; s[i] != '\0'; i++)
    {
        len += 1;
    }
    l_index = len - 1;
    for (i = 0; i < (len / 2); i++)
    {
        tmp = s[i];
        s[i] = s[l_index];
        s[l_index] = tmp;
        l_index--;
    }
}
