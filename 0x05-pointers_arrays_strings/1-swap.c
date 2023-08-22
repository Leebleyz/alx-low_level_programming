#include "main.h"

/**
 * swap_int - function to swap intergers
 * @a: interger to swap
 * @b: interger to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
