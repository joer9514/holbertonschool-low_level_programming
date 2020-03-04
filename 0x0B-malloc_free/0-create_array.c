#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - exercise 0
 * @size: size
 * @c: var
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (!size)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (!p)
		return (NULL);
	if (p)
	{
		while (size > 0)
			p[--size] = c;
	}
	return (p);
}
