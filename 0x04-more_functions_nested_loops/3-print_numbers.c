#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that checks for uppercase character.
 * @i:integer to display output
 * 
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
