#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function entry point
 * @dest: character to be returned
 * @src: character for function execution
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
