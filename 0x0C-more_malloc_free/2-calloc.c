#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements in the array
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory with values set to zero, or NULL if fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return NULL;

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return NULL;

	unsigned char *temp_ptr = (unsigned char *)ptr;
	for (unsigned int i = 0; i < nmemb * size; i++)
	{
		temp_ptr[i] = 0;
	}

	return ptr;
}
