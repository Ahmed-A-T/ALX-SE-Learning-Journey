/*
 * Filename: 104-print_buffer.c
 * Author: Ahmed-A-T
 */

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: a pointer to a string literal that want to print
 * @size: How many bytes that we want to print from the string
 *
 * Description: 1. print 10 bytes per line.
 * 2. Each line must start with the position of the first byte
 * of the line in hexadecimal (8 chars).
 * 3. Each line shows the Hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time separated with sapce
 * 4. Each line show the content of the buffer,
 * If the bytes is printable character
 * print letter, is not print .
 * 5. Each line ends with a new line only \n.
 * in Hexadecimal (8 chars), starting with 0
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	for (i = 0; i <= (size - 1); i += 10)
	{
		if (i <= 10)
			printf("%08x: ", i);
		else
			printf("%08x: ", i);
		for (j = 0; (j < 10);)
		{
			if ((i + j) < size)
			{
				printf("%02x", b[i + j++]);
				printf("%02x", b[i + j++]);
				printf(" ");
			}
			else
			{
				printf("     ");
				j += 2;
			}
		}
		for (k = 0; (k < 10) && (i + k) < size; k++)
		{
			if ((b[i + k] > 31) && (b[i + k] < 127))
			{
				printf("%c", b[i + k]);
			}
			else
			{
				printf("%c", '.');
			}
		}
		printf("\n");
	}
}
