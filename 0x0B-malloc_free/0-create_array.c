#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create array of chars and initialize it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: On success, a pointer to the created array.
 *         On failure or if size is 0, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);


	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
