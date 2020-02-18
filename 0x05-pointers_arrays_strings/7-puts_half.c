#include "holberton.h"
/**
  * puts_half - half number
  * @str: half
  * Return: void
  */
void puts_half(char *str)
{
	int n;

	if (str)
	{
		for (n = 0; *(str + n); n++)
			;
			for (str += (n + 1) / 2; *str; str++)
				_putchar(*str);
		_putchar('\n');
	}
}
