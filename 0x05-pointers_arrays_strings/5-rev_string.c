#include <stdio.h>
#include "main.h"
/**
 * rev_string - function entry point
 * @s: string to be reversed
 * Return: nothing
 */

/* Function definition */
void rev_string(char *s)
{
	char temp = *(s + left);
	int len = 0;
	int left = 0, right = len - 1;

	if (s == NULL)
	{
		return; /* Return if input string is NULL*/
	}


	while (*(s + len) != '\0')
	{
		len++;
	}


	while (left < right)
	{


	*(s + left) = *(s + right);
	*(s + right) = temp;
	left++;
	right--;
	}
}
