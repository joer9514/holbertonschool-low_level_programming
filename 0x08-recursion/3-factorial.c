#include "holberton.h"
/**
 * factorial - exercise 3
 * Description: exercise 3
 * @n: var1
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
