#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: var1
 * @needle: var2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a1;
	char *a2;

	while (*haystack != '\0')
	{
		a1 = haystack;
		a2 = needle;
		while (*a2 == *haystack && *a2 != '\0' && *haystack != '\0')
		{
			haystack++;
			a2++;
		}
		if (*a2 == '\0')
			return (a1);
		haystack = a1 + 1;
	}
	return (0);
}
