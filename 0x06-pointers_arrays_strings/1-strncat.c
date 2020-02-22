#include "holberton.h"
/**
  * _strncat - fuct strncat
  * @dest: var1
  * @src: var2
  * @n: var3
  * Return: 0
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (; j < n && *(src + j) != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}
