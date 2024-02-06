#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: The old size of the memory block
 * @new_size: The new size of the memory block
 *
 * Return: Pointer to the reallocated memory block or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == old_size)
	{
		return ptr;
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return NULL;
	}

	for (unsigned int i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);

	return new_ptr;
}
