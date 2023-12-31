#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* Find the length of the destination string */
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	/* Concatenate at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	/* Null-terminate the resulting string */
	dest[dest_len] = '\0';

	return (dest);
}
