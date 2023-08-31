#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - entry point
 * @s:string tobe checked
 * Return: nothing
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	if (*s == *(s + 1))
		return (is_palindrome(s + 2));

	return (0);
}
