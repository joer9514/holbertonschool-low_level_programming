#include "holberton.h"
/**
 * _strchr - exercise 3
 * @s: var1
 * @c: var2
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++, s++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	return ('\0');
}
