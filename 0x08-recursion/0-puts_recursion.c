#include "holberton.h"
/**
 * _puts_recursion - exercise 0
 * @s: var1
 * Return: void
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
