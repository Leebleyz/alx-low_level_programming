#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints a straightline
 * @n: is the number of lines
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}

