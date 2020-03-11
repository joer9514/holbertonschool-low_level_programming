#include "function_pointers.h"
/**
 * int_index - exercise 2
 * @array: pointer array
 * @size: var size
 * @cmp: pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp = NULL))
	{
		return (- 1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp) (array[i]))
			{
				return (i);
			}
		}
	}
	return (- 1);
}
