#include "main.h"
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
/**
 * isSeparator - function to check a separator
 * @c: separator
 * Return: separator
 */

bool isSeparator(char c)
{
return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
		c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
		c == ')' || c == '{' || c == '}');
}

/**
 * cap_string - function o capitalise all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int length = strlen(str);
	bool capitalize = true;
	int i;

	for (i = 0; i < length; i++)
	{
		if (isSeparator(str[i]))
		{
			capitalize = true;
			/* Set capitalize flag to true if a separator is found*/
		}
		else if (capitalize)
		{
			if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
			capitalize = false;
		       /* Set capitalize flag to false after capitalization*/
		}
	}

	return (str);
}
