#include "main.h"
#include <stdio.h>

/**
 * factorial - function tocalculate factorialofanumber
 * @n: the numbertobecalculated its factorial
 * Return: answer
 */

int factorial(int n)
{
	while (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
