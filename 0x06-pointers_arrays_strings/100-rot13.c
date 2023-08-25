#include "main.h"
#include <stdio.h>
/**
 * rot13 - function to encode to rot13
 * @str: string to be encoded
 * Return: original string
 */

char *rot13(char *str)
{
	char *original = str;
	char *result = str;

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			{
				*result = *str + 13;
			}
			else
			{
				*result = *str - 13;
			}
		}
		else
		{
		      *result = *str;
		}

	str++;
	result++;
	}

	*result = '\0';

	return (original);
}
