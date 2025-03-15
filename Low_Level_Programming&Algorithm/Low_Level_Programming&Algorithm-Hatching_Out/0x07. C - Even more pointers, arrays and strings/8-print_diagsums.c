/*
* Filename: 8-print_diagsums.c
* Author: Ahmed-A-T
*/

#include "main.h"
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers
* @a: a pointer to the first 1 Dimentional array of the 2 Dimentional array
* @size: the size of the 1 Dimentional array
*/
void print_diagsums(int *a, int size)
{
  int i, sum1 = 0, sum2 = 0;

  for (i = 0; i < size; i++)
  {
    sum1 += a[size * i + i];
    sum2 += a[(size - 1) + (size - 1) * i];
  }
  printf("%d, %d\n", sum1, sum2);
}
