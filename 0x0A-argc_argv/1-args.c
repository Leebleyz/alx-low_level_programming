#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: interger to count arguments
 * @argv: character argument
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argv[0] != 0)
	printf("%d\n", argc - 1);
	return (0);
}
