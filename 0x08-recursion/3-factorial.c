#include "main.h"
#include <stdio.h>

/**
 * factorial - function tocalculate factorialofanumber
 * @n: the numbertobecalculated its factorial
 * Return: answer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
