#include "holberton.h"
/**
  * _strlen - size of string
  * @s: var
  * Return: 0
  */
int _strlen(char *s)
{
	int aux = 0;

	if (s)
	{
		while (*(s + aux))
		{
			aux++;
		}
	}
	return (aux);
}
