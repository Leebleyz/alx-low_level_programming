#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - entry point
 * @argv: array ofarguments
 * @argc: interger to count arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int max, j, i, sum = 0;
	bool flag = false;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		max = argc;
		for (i = 1; i < max; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
				{
					sum += atoi(&argv[i][j]);
				}
				else
				{
					flag = true;
				}
			}
		}
	}

	if (flag == false)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
