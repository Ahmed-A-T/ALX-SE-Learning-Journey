/*
* Filename: 7-print_chessboard.c
* Author: Ahmed-A-T
*/
#include "main.h"

/**
* print_chessboard - prints the print chessboard
* @a: a pointer to the 8 character
*/
/*
void print_chessboard(char (*a)[8])
{
  int i, j;

  for (i = 0; i < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      _putchar(a[i][j]);
    }
    _putchar('\n');
  }
}
*/
/*
  * Another Solution
*/
void print_chessboard(char (*a)[8])
{
char (*row)[8];
char *element;

for (row = a; row < (a + 8); row++)
{
  element = *row;
  while (element < *row + 8)
  {
  _putchar(*element);
  element++;
  }
  _putchar('\n');
}
}
