#include "holberton.h"
/**
 * _puts - print string
 * @str: var
 * Return: 0
 */
void _puts(char *str)
{
	char *aux = str;

	if (str)
	{
		while (*aux)
		{
			_putchar(*aux);
			aux++;
		}
		_putchar('\n');
	}
}
