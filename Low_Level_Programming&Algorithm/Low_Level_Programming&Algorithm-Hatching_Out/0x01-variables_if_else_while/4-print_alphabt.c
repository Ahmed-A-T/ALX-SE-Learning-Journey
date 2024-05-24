/* File name: 4-print_alphabt.c
 * Author: Ahmed-A-T
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lowecase except e and q
 *
 * Return: Always 0
 */
int main(void)
{
	/* Solution #1
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if ((letter == 'e') || (letter == 'q'))
			continue;
		putchar(letter);
	}
	putchar('\n');
	*/

	/* Solution #2: */
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
