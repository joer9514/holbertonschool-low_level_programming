#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		number = number << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if  (*b == '1')
			number = number | 1;
		b++;
	}
	return (number);


}
