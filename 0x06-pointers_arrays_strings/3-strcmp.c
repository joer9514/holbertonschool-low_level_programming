#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: var1
 * @s2: var2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
