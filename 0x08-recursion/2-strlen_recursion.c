#include "holberton.h"
/**
 * _strlen_recursion - exercise 2
 * Description: exercise 2
 * @s: var1
 * Return: string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
