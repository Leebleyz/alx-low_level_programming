#include "main.h"

/**
 * _memcpy - entry point
 * @dest: character pointer
 * @src:character pointer
 * @n:interger
 * Return: answer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
