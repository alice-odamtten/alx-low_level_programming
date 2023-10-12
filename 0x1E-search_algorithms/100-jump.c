#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: he number of elements in array
 * @value:  the value to search for
 *
 * Return: always an it
 */

int jump_search(int *array, size_t size, int value)
{
	int low = 0, i, j, jump = sqrt(size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i += jump)
	{
		if (array[i] < value)
		{
			low = i;
		}
		else
		{
			break;
		}
		printf("Value checked array[%d] = [%d] \n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
	for (j = low; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d] \n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
