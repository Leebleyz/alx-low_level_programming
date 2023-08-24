#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to concutenate two strings
 * @dest:character to be concatinated
 * @src:second string to concatenate
 * Return: temp
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (temp);
}
