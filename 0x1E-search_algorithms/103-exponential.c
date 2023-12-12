#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers using the
* Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: the value to search for
* Return: if value not present in array or if array is NULL -1, else
* return first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t h, r, l;

	if (array == NULL || size == 0)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		printf("Searching in array: ");
		for (r = l; r <= h; r++)
		{
			printf("%d", array[r]);
			if (r < h)
				printf(", ");
		}
		printf("\n");

		r = l + (h - l) / 2;
		if (array[r] == value)
			return (r);
		else if (array[r] > value)
			h = r - 1;
		else
			l = r + 1;
	}

	return (-1);
}


/**
* exponential_search - searches for a value in a sorted array of integers
* using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located or -1 if value is not present
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search(array, right, value));
}
