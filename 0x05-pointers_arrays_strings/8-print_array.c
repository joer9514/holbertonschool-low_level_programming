#include "holberton.h"
/**
  * print_array - print arrays
  * @a: var1
  * @n: var2
  * Return: void
  */
void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
			if (--n)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
