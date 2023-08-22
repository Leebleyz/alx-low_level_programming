#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 * @str: character to be displayed
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
