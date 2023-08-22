#include <stdio.h>
#include "main.h"

/**
 * puts_half - function entry point
 * @str: string to be printed half
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int half_length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	half_length = (length) / 2;

	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
