#include "holberton.h"
/**
 * rot13 - encoder string
 * @s: var
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char k;

	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; j <= 51 && k == 0; j++)
		{
			if (array[j] == s[i])
			{
				s[i] = arr[j];
				k = 1;
			}
		}
	}
	return (s);
}
