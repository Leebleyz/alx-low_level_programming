#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:integer to display output
 * @accept: character to beaccepted
 * Return: answer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	int found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return (length);
		}

		s++;
	}

	return (length);
}
