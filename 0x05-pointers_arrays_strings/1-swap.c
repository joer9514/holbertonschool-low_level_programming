#include "holberton.h"
/**
  * swap_int - swap var
  * @a: var1
  * @b: var2
  * Return: void
  */
void swap_int(int *a, int *b)
{
	if (a && b)
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
}
