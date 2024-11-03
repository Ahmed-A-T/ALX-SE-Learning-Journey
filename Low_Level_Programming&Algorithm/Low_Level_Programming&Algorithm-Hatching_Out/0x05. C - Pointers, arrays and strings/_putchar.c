/*
 * Filename: _puchar.c
 * Author: Ahmed-A-T
 */
#include <unistd.h>

/**
 * _putchar - Writes the a character to standard output.
 * @c: The character need to print
 *
 * Return: If function success return 1 else returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
