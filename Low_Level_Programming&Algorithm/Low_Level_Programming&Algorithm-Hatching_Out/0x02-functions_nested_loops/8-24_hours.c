/*
 * Filename: 8-24_hours.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * jack_bauer: Prints every minute of the day of jack Bauer
 * 		Starts from 00:00 To 23:59.
 */

void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
