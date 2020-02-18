#include "holberton.h"
/**
  * puts2 - puts2
  * @str: var
  * Return: void
  */
void puts2(char *str)
{
	if (str)
	{
		do 
		{
			if (*str)
			{
				_putchar(*str++);
			}
		} while (*str++);
		_putchar('\n');
	}
}
