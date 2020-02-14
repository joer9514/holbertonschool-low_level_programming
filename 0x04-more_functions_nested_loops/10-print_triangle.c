#include "holberton.h"
/**
  * print_triangle - triangule
  * @size: var
  * Return: void
  */
void print_triangle(int size)
{
	int x, ax;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (ax = 1; ax <= size; ax++)
			{
				if (ax != size && ax <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
