#include "variadic_functions.h"
/**
* sum_them_all - exercise 0
* @n: const unsigned int
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;

	va_list valist;

	va_start(valist, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < (unsigned int) n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (sum);
}
