/*
* Filename: 100-set_string.c
* Author: Ahmed-A-T
 */
#include "main.h"
/**
* set_string - sets the value of a pointer to a char
* @s: a pointer to a poninter to the string that want to replace
* @to: a pointer to the string that will replace the s string
*/
void set_string(char **s, char *to)
{
  *s = to;
}
