#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - entry point
 * @x:the number to be raised to y
 * @y: the nember to be raised to
 * Return: answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
