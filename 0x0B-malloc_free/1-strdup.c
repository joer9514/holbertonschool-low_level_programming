#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - exercise 1
 * @str: var
 * Return: char
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	i = 0;
	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
	}
	i++;
	p = malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);
	for (j = 0; j < i;)
	{
		p[j] = str[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}
