#include "holberton.h"
/**
  * _strcat - print two string
  * @dest: var1
  * @src: var2
  * Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	for (j = 0; dest[j] != '\0'; j++)
		continue;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
