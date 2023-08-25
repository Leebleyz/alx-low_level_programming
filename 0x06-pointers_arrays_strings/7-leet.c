#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - function entry point
 * @str: string variable
 * Return:encoded string
 */

char *leet(char *str)
{
	char *encoded = malloc(strlen(str) + 1);
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *leetChars = "4433007711";
	char *found;

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		found = strchr(letters, str[i]);

		if (found != NULL)
		{
			encoded[j] = leetChars[found - letters];
		}
		else
		{
			encoded[j] = str[i];
		}
		j++;
	}
	encoded[j] = '\0';
	return (encoded);
}
