#include "holberton.h"
/**
 * _memcpy - exercise 2
 * @dest: var1
 * @src: var2
 * @n: var3
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
