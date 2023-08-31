#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, -1 if the itdoes not have
 * a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @start: The starting point of the search
 * @end: The ending point of the search
 *
 * Return: The natural square root of the number, -1 if the number does
 * a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid, root;

	if (start <= end)
	{
		mid = (start + end) / 2;
		root = mid * mid;

		if (root == n)
			return (mid);

		if (root < n)
			return (_sqrt_helper(n, mid + 1, end));

		return (_sqrt_helper(n, start, mid - 1));
	}

	return (-1);
}
