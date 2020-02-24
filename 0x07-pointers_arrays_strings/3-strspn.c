#include "holberton.h"
/**
 * _strspn - exercise 4
 * @s: var 1
 * @accept: var 2
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *aux;

	for (i = 0; s[i]; i++)
	{
		for (aux = accept; *aux; aux++)
		{
			if (s[i] == *aux)
				break;
		}
		if (!*aux)
			break;
	}
	return (i);
}
