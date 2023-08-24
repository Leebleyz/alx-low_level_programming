#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 *
 * Description: This function compares the two input strings character by
 * character until a difference is found or the end of a string is reached.
 * It returns the difference in ASCII value between the two different
 * characters or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
