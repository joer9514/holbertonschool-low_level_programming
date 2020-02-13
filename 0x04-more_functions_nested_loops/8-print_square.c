#include "holberton.h"
/**
 * print_square - eight exercice
 * @size: size
 * Return: void
 */
void print_square(int size)
{
	int x, ax;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (ax = 0; ax < size; ax++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
