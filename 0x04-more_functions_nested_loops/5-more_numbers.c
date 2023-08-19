#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that checks for uppercase character.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar((i/10) + '0');
			_putchar((i%10) + '0');
		}
		_putchar('\n');
	}
}
