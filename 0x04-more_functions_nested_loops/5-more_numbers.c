#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that checks for uppercase character.
 * @i:integer to display output
 * @j:extra counter
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
