/*
* Filename: 5-strstr.c
* Author: Ahmed-A-T
*/
#include "main.h"

/**
* _strstr - finds the first occurrence of the substring needle in the string haystack
* @haystack: the string to search inside it
* @needle: the substring that want to find inside haystack
*
* Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{

  for (; *haystack != '\0'; haystack++)
  {
    char *h = haystack;
    char *n = needle;

    while (*n == *h && *n != '\0')
    {
      h++;
      n++;
    }
    if (*n == '\0')
    {
      return (haystack);
    }
  }
  return (NULL);
}
