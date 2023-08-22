#include "main.h"

/**
 * _strlen - function that prints the lenth of the string
 * @s: a string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
