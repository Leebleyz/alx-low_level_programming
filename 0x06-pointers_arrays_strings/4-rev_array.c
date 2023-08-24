#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a:first pointer
 * @n:pointer to the last or end of array
 * Return:nothing
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	if (n <= 1)
	{
		return;
	}

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
