#include "lists.h"
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
