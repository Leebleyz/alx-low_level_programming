#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */

int main(void)

{
	char lower = "z";

	while (lower >= "a")
	{
		putchar(lower);
		--lower;
	}
	putchar("\n")
	return (0);
}
