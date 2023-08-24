#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function to copy string
 * @dest: string to be copied
 * @src: string to be copied
 * @n:counter
 * Return: pointer for the value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
