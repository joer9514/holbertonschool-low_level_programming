#include "holberton.h"
/**
  * print_chessboard
  * @a: var 1
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int f, c;

	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[f][c]);
		}
		_putchar('\n');
	}
}
