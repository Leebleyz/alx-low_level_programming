#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicate a string.
* @str: The string to be duplicated.
*
* Return: On success, a pointer to the duplicated string.
*         On failure or if str is NULL, NULL.
*/
char *_strdup(char *str)
{

	char *dup;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
