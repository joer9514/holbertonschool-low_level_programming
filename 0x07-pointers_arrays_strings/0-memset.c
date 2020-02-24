#include "holberton.h"
/**
 * _memset - exercise 1
 * @s: var1
 * @b: var2
 * @n: var3
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
