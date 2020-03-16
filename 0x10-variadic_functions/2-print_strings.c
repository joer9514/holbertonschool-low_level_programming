#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator: pointer
 * @n: var
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *p;

	va_start(valist, n);
	if (separator == NULL)
	{
		separator = "";
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
