#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array ofarguments
 * @argc: interger to count arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
