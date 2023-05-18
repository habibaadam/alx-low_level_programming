#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description - 'a function that creates an array of integers'
 * @min : elements in array
 * @max : number of bytes
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *ary, h = 0, j = min;

	if (min > max)
		return (0);

	ary = malloc((max - min + 1) * sizeof(int));

	if (ary == 0)
		return (NULL);

	while (h <= max - min)
		ary[h++] = j++;
return (ary);
}
