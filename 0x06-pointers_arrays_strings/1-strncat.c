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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
