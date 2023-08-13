#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
