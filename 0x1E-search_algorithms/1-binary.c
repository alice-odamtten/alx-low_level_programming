#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: he number of elements in array
 * @value:  the value to search for
 *
 * Return: always an it
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (l <= r)
	{
		printf("Searching in array: ");
		for (size_t i = l; i <= (size_t)r; i++)
		{
			if (i != l)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = l + (r - l) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1)
}
