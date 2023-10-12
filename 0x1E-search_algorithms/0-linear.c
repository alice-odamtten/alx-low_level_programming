#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: he number of elements in array
 * @value:  the value to search for
 *
 * Return: always an it
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d] \n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
