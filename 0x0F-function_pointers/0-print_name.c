#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - exercise 0
  * @name: pointer name
  * @f: pointer f
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
