#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char lower = 'a';

		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		putchar('\n');
		return (0);
}
