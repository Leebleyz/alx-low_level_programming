#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 * @c:integer to display output
 * Return: 1 if uppercase, 0 if lower
 */

int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
