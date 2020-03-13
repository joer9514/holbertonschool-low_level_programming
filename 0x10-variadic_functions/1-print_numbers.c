#include "variadic_functions.h"
/**
 * print_numbers - exercise 1
 * @separator: pointer
 * @n: var
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n && n != '\0'; i++)
	{
		printf("%d", va_arg(valist, unsigned int));
		if (separator != '\0')
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
