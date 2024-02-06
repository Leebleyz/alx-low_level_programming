#include <stdlib.h>

/**
* _strlen - Returns the length of a string
* @s: Input string
*
* Return: The length of the string
*/
unsigned int _strlen(char *s)
{
	unsigned int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return len;
}

/**
* string_nconcat - Concatenates two strings up to n bytes of s2
* @s1: First string
* @s2: Second string
* @n: Number of bytes of s2 to concatenate
*
* Return: Pointer to the newly allocated concatenated string or NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	concat_str = malloc(len_s1 + n + 1);
	if (concat_str == NULL)
		return NULL;

	for (i = 0; i < len_s1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat_str[i + j] = s2[j];
	}

	concat_str[i + j] = '\0';

	return concat_str;
}
