#include "search_algos.h"

/**
* linear_search - Find value element into "array" array
* using linear search
*
* @array: pointer
* @size: size
* @value: value
*
* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
