#include "search_algos.h"

/**
* binary_search - Find value element into "array" array
* using binary search
*
* @array: pointer array
* @size: size array
* @value: value
*
* Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid, i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
		}
		mid = l + (r - l) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
