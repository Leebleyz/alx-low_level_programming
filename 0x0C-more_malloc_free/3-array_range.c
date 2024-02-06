#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max
* @min: The minimum value
* @max: The maximum value
*
* Return: Pointer to the newly created array, or NULL if failed
*/
int *array_range(int min, int max)
{
	if (min > max)
		return NULL;

	int *arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return NULL;

	for (int i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return arr;
}
