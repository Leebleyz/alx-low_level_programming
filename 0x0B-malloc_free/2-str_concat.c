#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenate two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: On success, a pointer to the concatenated string.
*         On failure, NULL.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int len = len1 + len2;
	char *concat = malloc((len + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2);
	concat[len] = '\0';

	return (concat);
}
