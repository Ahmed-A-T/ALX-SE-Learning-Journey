/*
 * File Name: 101-quote.c
 * Author: Ahmed-A-T
 */
#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" -
 * Dora Korpar, 2015-10-19" without using printf or puts functions
 *
 * Return: Always 1
 */
int main(void)
{
	fputs(
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		stdout);

	return (1);
}
