#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: the value to search for
* Return: first index where value is located or -1 if value is not present
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);

}
