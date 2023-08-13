#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char hex[] = "0123456789abcdef";

	for (int i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
