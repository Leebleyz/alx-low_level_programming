#include<stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function entrypoint
 * @s:string counter
 * Return: answer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
