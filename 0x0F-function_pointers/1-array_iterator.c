#include "function_pointers.h"
/**
 * array_iterator - exercise 1
 * @array: pointer array
 * @size: var funct
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
