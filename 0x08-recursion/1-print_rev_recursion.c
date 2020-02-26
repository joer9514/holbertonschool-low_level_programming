#include "holberton.h"
/**
 * _print_rev_recursion - exercise 1
 * @s: var1
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
