#include "holberton.h"
/**
  * more_numbers - six exercice
  * Description: print numbers x10
  * Return: void
  */
void more_numbers(void)
{
	int x, n;

	for (x = 1; x < 11; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
