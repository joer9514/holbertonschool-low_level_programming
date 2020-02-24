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

	for (; *s != '\0'; s++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	if (s[i] == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
	return (s);

}
