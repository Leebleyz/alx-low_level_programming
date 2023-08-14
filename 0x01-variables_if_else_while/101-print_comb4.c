#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
				putchar(',');
				putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
