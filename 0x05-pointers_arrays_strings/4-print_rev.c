#include "holberton.h"
/**
 * print_rev - print string rev
 * @s: var
 * Return: void
 */
void print_rev(char *s)
{
	char *aux = s;

	if (s)
	{
		while (*aux)
		{
			aux++;
		}
		while (s < aux--)
		{
			_putchar(*aux);
		}
		_putchar('\n');
	}
}
