#include "holberton.h"
/**
 * leet - change
 * @s: var
 * Return: return s
 */

char *leet(char *s)
{
	int i, j;
	char array[] = "aAeEoOtTlL";
	char sec[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (array[j] == s[i])
			{
				s[i] = sec[j];
			}
		}
	}
	return (s);
}
